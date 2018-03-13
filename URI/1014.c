#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double y, media;
    scanf("%d %lf",&x,&y);
    media = x/y;
    printf("%.3lf km/l\n",media);
    return 0;
}
