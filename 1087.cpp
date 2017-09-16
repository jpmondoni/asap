#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
   int x1, y1, x2, y2;
   
   while(1)
   {
      cin >> x1 >> y1 >> x2 >> y2;
      if(!(x1 + y1 + x2 + y2)) break;         
      
      bool mesmaFila = (x1 == x2 || y1 == y2);
      bool mesmaDiagonal = (labs(x1 - x2) == labs(y1 - y2));
      
      if(x1 == x2 && y1 == y2) cout << 0 << endl;
      else if(mesmaFila || mesmaDiagonal) cout << 1 << endl;
      else cout << 2 << endl;
   }
   
}