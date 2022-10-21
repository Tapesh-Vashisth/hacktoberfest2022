#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
\\Year entered will be leap only when it is divisible by 4 and 400 and not only by 100. 
   if (year % 400 == 0 || (year%4==0 && year%100!=0))
      printf("%d is a leap year.", year);
   else
      printf("%d is not a leap year.", year);

   return 0;
}
