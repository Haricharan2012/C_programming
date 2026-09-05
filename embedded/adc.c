```c
#include "adc_drive.h"   
// Includes the header file "adc_drive.h".
// This probably contains:
//   - definitions such as PA, PB, PC
//   - ADC1 / ADC2 definitions
//   - init_GP()
//   - GPIO modes such as IN, I_AN
//   - DelayMs()
//   - constants such as adc1 and adc2

/*
PA0 -> ADC12_IN0
// PA0 is connected internally to ADC channel 0 of ADC1/ADC2.

PA1 -> ADC12_IN1
// PA1 corresponds to ADC channel 1.

PA2 -> ADC12_IN2
// PA2 corresponds to ADC channel 2.

PA3 -> ADC12_IN3
// PA3 corresponds to ADC channel 3.

PA4 -> ADC12_IN4
// PA4 corresponds to ADC channel 4.

PA5 -> ADC12_IN5
// PA5 corresponds to ADC channel 5.

PA6 -> ADC12_IN6
// PA6 corresponds to ADC channel 6.

PA7 -> ADC12_IN7
// PA7 corresponds to ADC channel 7.

PB0 -> ADC12_IN8
// PB0 corresponds to ADC channel 8.

PB1 -> ADC12_IN9
// PB1 corresponds to ADC channel 9.

PC0 -> ADC12_IN10
// PC0 corresponds to ADC channel 10.

PC1 -> ADC12_IN11
// PC1 corresponds to ADC channel 11.

PC2 -> ADC12_IN12
// PC2 corresponds to ADC channel 12.

PC3 -> ADC12_IN13
// PC3 corresponds to ADC channel 13.

PC4 -> ADC12_IN14
// PC4 corresponds to ADC channel 14.

PC5 -> ADC12_IN15
// PC5 corresponds to ADC channel 15.

ADC12_IN16 input channel which is used to convert the sensor output voltage
into a digital value.
// This comment is describing another ADC input channel.
// Note: on STM32F1 devices, channel 16 is typically an internal ADC
// channel (such as temperature sensor/Vrefint depending on the MCU),
// rather than a normal external GPIO pin. So it should not be treated
// like PA0–PC5 without checking the exact STM32F1 part number/datasheet.
*/


// Initializing the ADC for the STM32F1
char adc_init(char adc, short port, short pin)
// Function that initializes one ADC for a particular GPIO pin.
//
// adc  -> tells us which ADC to initialize (ADC1 or ADC2)
// port -> tells us which GPIO port (PA, PB, PC)
// pin  -> tells us which pin number
//
// The function returns a char:
//     1 = initialization/input combination was valid
//     0 = invalid port/pin combination
{
    char channel;
    // Stores the ADC channel number corresponding to the selected
    // GPIO pin.
    //
    // Example:
    // PA0 -> channel 0
    // PB0 -> channel 8
    // PC0 -> channel 10

    char result = 0;
    // Initially assume that the supplied port/pin combination is invalid.
    //
    // 0 = invalid
    // 1 = valid


    if(port == PA)
    // Check whether the selected GPIO port is Port A.
    {
        if(pin < 8)
        // Check whether the pin number is 0 through 7.
        // PA0–PA7 are being used as ADC channels 0–7.
        {
            result = 1;
            // Mark the port/pin combination as valid.

            channel = pin;
            // For Port A, the ADC channel number is the same as
            // the pin number.
            //
            // PA0 -> channel 0
            // PA1 -> channel 1
            // ...
            // PA7 -> channel 7
        }
    }


    else if (port == PB)
    // If it wasn't Port A, check whether it is Port B.
    {
        if(pin<2)
        // Only PB0 and PB1 are accepted.
        {
            result = 1;
            // Mark the port/pin combination as valid.

            channel = 8 + pin;
            // Port B ADC channels start at channel 8.
            //
            // PB0 -> 8 + 0 = channel 8
            // PB1 -> 8 + 1 = channel 9
        }
    }


    else if (port == PC)
    // If it wasn't Port A or B, check whether it is Port C.
    {
        if(pin<6)
        // Only PC0–PC5 are accepted.
        {
            result = 1;
            // Mark the port/pin combination as valid.

            channel = 10 + pin;
            // Port C ADC channels start at channel 10.
            //
            // PC0 -> 10 + 0 = channel 10
            // PC1 -> 10 + 1 = channel 11
            // ...
            // PC5 -> 10 + 5 = channel 15
        }
    }


    if(result)
    // Continue with ADC initialization only if the selected
    // port/pin combination was valid.
    {
        init_GP(port,pin,IN,I_AN);
        // Configure the selected GPIO pin as an analog input.
        //
        // port -> PA/PB/PC
        // pin  -> selected pin number
        // IN   -> GPIO input mode
        // I_AN -> analog input configuration
        //
        // This is important because an ADC pin should be configured
        // as  an analog input rather than as a normal digital input.


        if(adc == adc1)
        // Check whether the caller requested ADC1.
        {
            RCC->APB2ENR |= 0x201;
            // Enable the clocks needed by GPIO/ADC1.
            //
            // RCC = Reset and Clock Control.
            // APB2ENR = APB2 peripheral clock enable register.
            //
            // 0x201 in binary is:
            //
            // 0x201 = 0010 0000 0001
            //
            // This sets bit 0 and bit 9.
            //
            // On STM32F1, bit 0 enables AFIO clock and bit 9 enables
            // ADC1 clock.
            //
            // IMPORTANT:
            // This code is using a hexadecimal "magic number".
            // A more readable version would normally use symbolic
            // definitions such as RCC_APB2ENR_AFIOEN and
            // RCC_APB2ENR_ADC1EN.


            ADC1->CR2 = 0;
            // Clear ADC1 Control Register 2.
            //
            // This resets the CR2 configuration to zero before
            // configuring the ADC.


            ADC1->SQR3 = channel;
            // Put the selected ADC channel into the first conversion
            // position of the regular sequence.
            //
            // SQR3 contains the first few regular conversion channel
            // selections.
            //
            // Since only one channel is being converted here,
            // "channel" becomes the channel that ADC1 converts.
            //
            // Example:
            // adc_init(adc1, PA3)
            // channel = 3
            // ADC1->SQR3 = 3
            // Therefore ADC1 converts channel 3.


            ADC1->CR2 |= 1;
            // Set bit 0 of ADC1 CR2.
            //
            // Bit 0 = ADON (ADC ON).
            //
            // Therefore this turns ADC1 on.
            //
            // 1 in binary:
            // 0000 0000 0001
            //
            // |= means:
            // "set these bits while leaving the other bits unchanged."


            DelayMs(100);
            // Wait for 100 milliseconds.
            //
            // On STM32F1, a delay after enabling the ADC is commonly
            // used to allow the ADC to stabilize.


            ADC1->CR2 |= 1;
            // Set ADON again.
            //
            // On STM32F1, setting ADON while the ADC is already enabled
            // can be used to start a conversion in certain configuration
            // modes.


            ADC1->CR2 |= 2;
            // Set bit 1 of CR2.
            //
            // Bit 1 = CONT (Continuous Conversion mode).
            //
            // Setting this bit tells the ADC to keep performing
            // conversions continuously.
            //
            // Therefore after the ADC starts converting, it repeatedly
            // converts the selected channel.


        }


        else if(adc == adc2)
        // If the requested ADC wasn't ADC1, check whether it is ADC2.
        {
            RCC->APB2ENR |= 0x401;
            // Enable the required clocks for ADC2.
            //
            // 0x401 = bits 0 and 10 set.
            //
            // Bit 0  -> AFIO clock
            // Bit 10 -> ADC2 clock
            //
            // Again, symbolic register definitions would make this
            // easier to understand.


            ADC2->CR2 = 0;
            // Clear ADC2 Control Register 2.


            ADC2->SQR3 = channel;
            // Select the requested ADC channel as the first regular
            // conversion channel for ADC2.


            ADC2->CR2 |= 1;
            // Set ADON bit.
            // This turns ADC2 on.


            DelayMs(100);
            // Wait 100 ms for ADC2 to stabilize.


            ADC2->CR2 |= 1;
            // Set ADON again to start conversion.


            ADC2->CR2 |= 2;
            // Set CONT bit.
            // ADC2 continuously converts the selected channel.
        }
    }


    return result ;
    // Return whether the initialization request was valid.
    //
    // 1 -> valid GPIO/ADC combination
    // 0 -> invalid GPIO/pin combination
}


// Reading the flag that says the data is ready
char adc_check(char adc, short port, short pin)
// Checks whether the selected ADC has completed a conversion.
//
// adc  -> ADC1 or ADC2
// port -> supplied GPIO port
// pin  -> supplied GPIO pin
//
// NOTE:
// port and pin are not actually used inside this function.
// They are present in the function parameters, but the function only
// needs to know which ADC to check.
{
    char check = 0;
    // Assume that ADC conversion is not complete.
    //
    // 0 = data not ready
    // 1 = data ready


    if(adc == adc1)
    // Check whether we are checking ADC1.
    {
        if(ADC1->SR & 2)
        // Read ADC1 Status Register.
        //
        // ADC1->SR contains flags indicating the current ADC state.
        //
        // Bit 1 = EOC (End Of Conversion).
        //
        // 2 in binary is:
        // 0000 0000 0010
        //
        // Therefore:
        //
        // ADC1->SR & 2
        //
        // checks whether bit 1 is set.
        //
        // If EOC = 1, the conversion has finished and ADC data
        // is available in ADC1->DR.
        {
            check  = 1;
            // Tell the caller that ADC data is ready.
        }
    }


    else if(adc == adc2)
    // If the requested ADC is ADC2, check ADC2.
    {
        if(ADC2->SR & 2)
        // Check ADC2's EOC flag (bit 1).
        {
            check  = 1;
            // ADC2 conversion is complete, so report data ready.
        }
    }


    return check;
    // Return:
    //
    // 0 -> ADC conversion hasn't completed
    // 1 -> ADC conversion has completed
}


// Reading the ADC value 
int adc_rx(char adc, short port, short pin)
// Reads the converted ADC value.
//
// adc  -> ADC1 or ADC2
// port -> GPIO port (currently unused)
// pin  -> GPIO pin (currently unused)
//
// Returns an integer representing the ADC reading scaled to 0–1000.
{
    int result = 0;
    // Variable that will contain the final scaled result.


    int data = 0;
    // Variable that will contain the raw ADC value.


    if(adc == adc1)
    // If the selected ADC is ADC1...
    {
        data = ADC1->DR;
        // Read the ADC1 Data Register.
        //
        // DR contains the digital result produced by the ADC.
        //
        // For a 12-bit ADC, the normal range is:
        //
        // 0     -> 0000 0000 0000
        // 4095  -> 1111 1111 1111
        //
        // Therefore:
        // 0 <= data <= 4095
    } 


    else if(adc == adc2)
    // Otherwise, if the selected ADC is ADC2...
    {
        data = ADC2->DR;
        // Read ADC2's Data Register.
    }


    result = (data*1000)/0xfff;
    // Convert the raw 12-bit ADC value into a value from approximately
    // 0 to 1000.
    //
    // 0xFFF is hexadecimal for 4095.
    //
    // Therefore this calculation is:
    //
    // result = data × 1000 / 4095
    //
    // Examples:
    //
    // ADC = 0
    // result = 0 × 1000 / 4095
    //        = 0
    //
    // ADC = 2048
    // result ≈ 2048 × 1000 / 4095
    //        ≈ 500
    //
    // ADC = 4095
    // result = 4095 × 1000 / 4095
    //        = 1000
    //
    // So the ADC's 0–4095 range is converted to approximately
    // a 0–1000 range.


    return result;
    // Return the scaled ADC value to the caller.
}
```

