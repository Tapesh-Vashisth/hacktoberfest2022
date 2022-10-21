#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0 || (year%4==0 && year%100!=0))
      printf("%d is a leap year.", year);
   else
      printf("%d is not a leap year.", year);

   return 0;
}
