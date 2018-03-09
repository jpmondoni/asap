#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, calc, raiz;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    calc = pow((x2-x1), 2)+ pow((y2-y1),2);
    raiz = sqrt(calc);
    printf("%.4lf\n",raiz);
    return 0;
}
