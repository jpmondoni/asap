#include <iostream>
#include <cstring>

using namespace std;

int main()
{
   char numero[10];
   int tamanho, cont;
   
   cin >> numero;
   
   tamanho = strlen(numero);
   
   for (cont = tamanho - 1; cont >= 0; cont--)
   {
      if (cont == 0)
      {
         cout << numero[cont];
      }
      else
      {
         cout << numero[cont];
      }
   }

   cout << endl;
   	
   return 0;

}