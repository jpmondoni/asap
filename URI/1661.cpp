#include <stdio.h>

int main (){

   int a, c, v, d[100001];
   long t;

   while (1){
      scanf ("%d", &a);
      if (a==0){
         break;
      }
      for (c=0; c<a; c++){
            scanf ("%d", &d[c]);
      }
      t=0;
      for (c=1; c<a; c++){
         if (d[c-1]<0){
               t=t+(-1)*d[c-1];
         }
         else {
               t+=d[c-1];
         }
         d[c]+=d[c-1];
      }
      printf ("%d\n", t);
      }
}