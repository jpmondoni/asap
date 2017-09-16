#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
   int cont = 1, num = 0 ;
   char cv[9];
   char cmp[9]="caw caw";

   while(cont<=3){
      gets(cv);
      if(strcmp(cv,cmp)!=0){
         if(cv[0]==42){
            num = num + 4;   
         }
         if(cv[1]==42){
            num = num + 2;   
         }
         if(cv[2]==42){
            num = num + 1;   
         }
      
      }
      else{
         printf("%d\n",num);   
         num = 0;
         cont++;                  
      }      
   
   }
   return 0;
}