#include <iostream>

using namespace std;

int main(){
    int n, i, sum;

    while (cin >> n && n != 0){
        sum=0;
        for(i=1;i<=n;i++){
            sum+=i*i;
        }
        cout << sum << endl;
    }
    return 0;
}

// para achar o numero de quadrados dentro de um quadrado, multiplica-se o número N*N até que N seja 1. Soma se os resultados.