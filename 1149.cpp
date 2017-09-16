#include <iostream>

using namespace std;

int main(){
    int a, b, s;

    cin >> a >> b;
    s = a;

    while (b <= 0) std::cin >> b;
    for (int i = 1; i < b; i++)
        s += ++a;

    cout << s << endl;
    
    return 0;
}