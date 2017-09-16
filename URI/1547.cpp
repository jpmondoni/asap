#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n, qt, s, g, i, menor, adv;

    cin >> n;

    while (n--) {
        cin >> qt >> s;
    	cin >> g;

        menor = abs(g - s);
        adv = 1;
        i = 1;

        while (i++ < qt) {
    		cin >> g;

            if (abs(g - s) < menor) {
                menor = abs(g - s);
                adv = i;
            }
        }

        cout << adv << endl;
    }

    return 0;
}