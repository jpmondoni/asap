#include <stdlib.h>
#include <stdio.h>


int main()
{
   int c;
   while (scanf("%d",&c) != EOF)
   {
      if (c == 0)
         printf("vai ter copa!\n");
      else
         printf("vai ter duas!\n");      
      

   }
   return 0;
}