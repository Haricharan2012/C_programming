#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop to print all rows
    for (int row = 0; row < n; row++) 
      {
        for (int col=0;col<n-row;col++)  //prints decreasing stars as now col=n-row 
          {
            printf("*");
          }
         printf("\n");
       }
   
}
