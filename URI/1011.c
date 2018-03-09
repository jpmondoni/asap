#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   double raio, conta;
   scanf("%lf",&raio);
   conta = 4/3.0 * 3.14159 * pow(raio,3);
   printf("VOLUME = %.3lf\n",conta);

   return 0;
}
