#include <iostream>

using namespace std;

int card(int a,int b);

int main()
{
   int N,F1,F2;
   cin >> N;
   for(int i=1;i<=N;i++)
   {
      cin >> F1 >> F2;
      cout << card(F1,F2) << endl;
   }

   
   return 0;
}

int card(int F1, int F2)
{
   if(F2==0)
   {
      return F1;
   }
   return card(F2,F1%F2);
}