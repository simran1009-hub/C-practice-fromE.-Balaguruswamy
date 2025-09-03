// Write an algorithm and draw a flowchart to display in words the digits of a number.
#include <stdio.h>
#include <stdlib.h>
void prints_digits_in_words(int);

void prints_digits_in_words(int a)
{
   if (a == 1)
   {
      printf("one ");
   }
   if (a == 2)
   {
      printf("two ");
   }
   if (a == 3)
   {
      printf("three ");
   }
   if (a == 4)
   {
      printf("four ");
   }
   if (a == 5)
   {
      printf("five ");
   }
   if (a == 6)
   {
      printf("six ");
   }
   if (a == 7)
   {
      printf("seven ");
   }
   if (a == 8)
   {
      printf("eight ");
   }
   if (a == 9)
   {
      printf("nine ");
   }
   if (a == 0)
   {
      printf("zero ");
   }
}
int main()
{
   int n, count = 0;
   printf("Enter n, we will display the digits of n in words\n");
   scanf("%d", &n);
   if(n==0){
      printf("\nzero ");
   }
   else{
   int n_temp = n;
   int digit[100];

   while (n_temp != 0)
   {
      n_temp /= 10;
      count++;
   }
   n_temp = n;

   for (int i = 0; i < count; i++)
   {
      digit[i] = n_temp % 10;
      n_temp /= 10;
   }
   for (int i = count - 1; i >= 0; i--)
   {
      prints_digits_in_words(digit[i]);
   }
}

   return 0;
}