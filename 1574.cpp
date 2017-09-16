#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int i, t, n, index, pos, cmd[102];
    string command;

    cin >> t;

    while (t--) {
        i = 1;
        pos = 0;

        cin >> n;
        while (i <= n) {
            cin >> command;
            if (command == "LEFT") {
                pos--;
                cmd[i] = -1;
            } else if (command == "RIGHT") {
                pos++;
                cmd[i] = 1;
            } else {
                scanf(" AS %d", &index);
                pos += cmd[index];
                cmd[i] = cmd[index];
            }
            i++;
        }
        cout << pos << endl;
    }

    return 0;
}