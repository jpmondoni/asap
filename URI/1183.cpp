#include <cstdio>

int main() {
    char o;
    int i, j, c, k=0;
    float s = 0.0, n;

    scanf("%c", &o);

    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++) {
            scanf("%f", &n);
            if (j > i) {
                s += n;
                k++;
            }
        }
    }

    if (o == 'S') printf("%.1f\n", s);
    else printf("%.1f\n", s / k);

    return 0;
}