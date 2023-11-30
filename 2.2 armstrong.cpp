#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
   int originalNum = num;
   int numDigits = 0;
   int sum = 0;
   while (num > 0) {
       num /= 10;
       numDigits++;
   }
num = originalNum;
   while (num > 0) {
       int digit = num % 10;
       sum += pow(digit, numDigits);
       num /= 10;
   }
 
   return sum == originalNum;
}
int main() {
   int N;
   printf("Enter a positive integer: ");
   scanf("%d", &N);
 
   if (isArmstrong(N)) {
       printf("%d  true it is an Armstrong number.\n", N);
   } else {
       printf("%d  false it is not an Armstrong number.\n", N);
   }
 
   return 0;
}
