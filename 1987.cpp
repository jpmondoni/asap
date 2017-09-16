#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
   string s;
   int n;

   while (cin >> n >> s)
   {
      int sum = 0;

      for (int i = 0; i < n; ++i)
         sum += s[i] - '0';

      if (sum % 3 == 0) cout << sum << " sim\n";
      else cout << sum << " nao\n";
   }

   return 0;
}
