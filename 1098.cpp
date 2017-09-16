#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   int var, i=0, j=1;
   for (var = 0; var < 11; ++var) {
      if ((i / 10.0) == 1 || (i / 10.0) == 2 || (i / 10.0) == 0) {
         cout << "I=" << fixed << setprecision(0) << (i/10.0) << " J=" << fixed << setprecision(0) << ((i / 10.0) + j) << "\n";
         cout << "I=" << fixed << setprecision(0) << (i/10.0) << " J=" << fixed << setprecision(0) << ((i / 10.0) + j + 1) << "\n";
         cout << "I=" << fixed << setprecision(0) << (i/10.0) << " J=" << fixed << setprecision(0) << ((i / 10.0) + j + 2) << "\n";
      } else {
         cout << "I=" << fixed << setprecision(1) << (i/10.0) << " J=" << fixed << setprecision(1) << ((i / 10.0) + j) << "\n";
         cout << "I=" << fixed << setprecision(1) << (i/10.0) << " J=" << fixed << setprecision(1) << ((i / 10.0) + j + 1) << "\n";
         cout << "I=" << fixed << setprecision(1) << (i/10.0) << " J=" << fixed << setprecision(1) << ((i / 10.0) + j + 2) << "\n";
      }
      i += 2;
   }
   return 0;
}