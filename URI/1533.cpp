#include <iostream>

using namespace std;

int main (){
    
    int n, i, j, k,
        number, maior, sm;

    while (cin >> n && n){
        maior = 0;
        sm = 0;
        i = 0;

        while (++i <= n){
            cin >> number;

            if (number > maior){
                sm = maior;
                k = j;

                maior = number;
                j = i;
            } else if (number > sm){
                sm = number;
                k = i;
            }
        }

        cout << k << endl;
    }

    return 0;
}