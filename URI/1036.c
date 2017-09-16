#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, r1, r2;
    scanf("%lf %lf %lf",&a, &b, &c);
    if(a==0 || b*b-4*a*c < 0){
        printf("Impossivel calcular\n");
    } else{
        r1 = (b*-1 + sqrt(b*b-4*a*c))/(2*a);
        r2 = (b*-1 - sqrt(b*b-4*a*c))/(2*a);
        printf("R1 = %.5f\nR2 = %.5f\n",r1, r2);
    }
    return 0;
}
