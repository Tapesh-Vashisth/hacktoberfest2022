#include<stdio.h>
 int main()
 {
     int base, exponent;
     long power=1;

     printf("Enter base and Exponent: ");
     scanf("%d %d",&base,&exponent);

     while(exponent!=0)
     {
         power *= base; //power= power  * base
         exponent--;
     }

     printf("Result = %ld\n", power);

     return 0;
 }
