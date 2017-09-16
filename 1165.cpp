#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(long n) {
    if (n == 2) return true;
    if (n % 2 == 0 || n < 2) return false;

    for (long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long x;
    int n;

    cin >> n;

    while (n--) {
        cin >> x;

        if (is_prime(x)) {
            cout << x << " eh primo" << endl;
        } else {
            cout << x << " nao eh primo" << endl;
        }
    }

    return 0;
}