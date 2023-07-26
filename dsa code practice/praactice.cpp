#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int p=4;
  	// Complete the code to print the pattern.
  	int i;
      while(i=0;i<4;i++){
          while(int j=0;j<=3;j++){
              printf("%d",p);
              if(j<=i){
                  p--;
              }
          }
          
      }
      
      
      
      
      
    return 0;
}
