#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, team_1_1, team_2_1, team_1_2, team_2_2;
    
    scanf("%d", &n);

    while (n--) {
        scanf("%d x %d", &team_1_1, &team_2_1);
        scanf("%d x %d", &team_2_2, &team_1_2);

        if (team_1_1 + team_1_2 > team_2_1 + team_2_2) {
            cout << "Time 1\n";
        } else if (team_1_1 + team_1_2 < team_2_1 + team_2_2) {
            cout << "Time 2\n";
        } else if (team_1_2 > team_2_1) {
            cout << "Time 1\n";
        } else if (team_1_2 < team_2_1) {
            cout << "Time 2\n";
        } else {
            cout << "Penaltis\n";
        }
    }

    return 0;
}