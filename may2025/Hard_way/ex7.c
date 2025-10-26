# include<stdio.h>

int main()
 
  {
    int num =10;
    float dum =10.5;
    char alp = 'M';
    char strx[]="kryptonite";
    double power = 3456.678;
    double pot=power*num;
    
    
    
    printf("\n superman got to know about his real srength when he was %d years old",num);
    printf("\n superman once lifted %f tons as a kid",dum);
    printf("\n superman's mom's first name starts with a %c",alp);
    printf("\n superman's only real weakness was a mineral from his home planet called %s",strx);
    printf("\n superman's atmost potential at lifting weights is said to be at %lf million tons",pot);
    
   unsigned long galaxy = 1L *1024L *1024L * 1024L * 1024L * 1024L * 1024L;    //* 1024L   //integer overflow
    int waste=100;
   double waste_rate=1.2;
    printf("\n there are %ld galaxies know to us" ,galaxy);
    
    double expected_waste=waste*waste_rate;
    printf("\n the total expected waste rate is %f",expected_waste);
    
    double galaxy_waste = expected_waste/galaxy;
    printf("\n the total waste in the galaxy is %e",galaxy_waste);
    
    char nul = '\0';
    
    printf("\n the character is a %c",nul);
    
    int waste_nul = waste*nul;
    
    printf("\n the product of int and char here leads to %d",waste_nul);
    
    return 0;
    
   }














 
