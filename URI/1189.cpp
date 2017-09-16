#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char o;
    int i, j, l=0;
    double s = 0, n;

    cin >> o;

    for (i = 0; i <= 11; i++){
        for (j = 0; j <= 11; j++){
            cin >> n;
            if (j < l)
                s += n;
        }
        if(i<5)
            l++;
        else if(i >=6)
            l--;
    }

    if (o == 'S') printf("%.1f\n", s);
    else printf("%.1f\n", s / 30);

    return 0;
}