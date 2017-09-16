#include <iostream>
#include <cstdio>

int main() {

   double count, aux = 0.00, S = 0;00;

   for(count=1; count<=100; count++){
      aux = 0;
      aux = 1.0/count;
      S = S + aux;
   }

   printf("%.2lf\n", S);

   return 0;
}