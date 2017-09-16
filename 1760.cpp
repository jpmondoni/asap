#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){

   double x,aTotal;
   int l;
   while (cin >> l){
      x = ((l*l)*sqrt(3)) / 4;
      aTotal = (8 * x) / 5;
      printf("%.2lf\n", aTotal);
   }
   
   return 0;
}