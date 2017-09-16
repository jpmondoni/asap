#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BuscaBinaria(vector<int> v, int n) {
    int inicio = 0;
    int fim = v.size() - 1;
    int meio = fim / 2;

    while (inicio < fim) {
        if (v.at(meio) < n) {
            inicio = meio + 1;
            meio = (fim + inicio) / 2;
        } else if (v.at(meio) > n || (meio > 0 && v.at(meio - 1) == n)) {
            fim = meio - 1;
            meio = (fim + inicio) / 2;
        } else {
            return meio + 1;
        }
    }

    if (v.at(meio) == n) return meio + 1;
    return -1;
}

int main() {
    int n, q, marble, query, position, c = 0;
    vector<int> marbles;

    while (cin >> n >> q && n && q) {
        marbles.clear();

        while (n--) {
            cin >> marble;
            marbles.push_back(marble);
        }

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << ++c << ":" << endl;

        while (q--) {
            cin >> query;
            position = BuscaBinaria(marbles, query);
            if (position == -1) {
                cout << query << " not found" << endl;
            } else {
                cout << query << " found at " << position << endl;
            }
        }
    }
    return 0;
}