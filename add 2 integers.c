#include<stdio.h>
 
int main()
{
   int a, b, c;
   
   printf("Enter two numbers to add\n");
   scanf("%d%d", &a, &b);
   
   c = a + b;
   
  if(c>0)
   
   printf("Sum of the numbers = %d\n", c);
   else
   printf(" invalid input");
   
   return 0;
}
