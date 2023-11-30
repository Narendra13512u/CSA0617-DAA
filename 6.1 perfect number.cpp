#include <stdio.h>
int isPerfect(int num) {
   int sum = 1;
   for (int i = 2; i * i <= num; i++) {
       if (num % i == 0) {
           sum += i;
           if (i != num / i) {
               sum += num / i;
           }
       }
   }
   return sum == num;
}
void printPerfectNumbers(int n) {
   int num = 2;
   int count = 0;
 
   while (count < n) {
       if (isPerfect(num)) {
           printf("%d\n", num);
           count++;
       }
       num++;
   }
}
 
int main() {
   int n;
   
   printf("Enter the value of n: ");
   scanf("%d", &n);
   
   printf("The first %d perfect numbers are:\n", n);
   printPerfectNumbers(n);
   
   return 0;
}
