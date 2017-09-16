#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas,moedas;
    int n100, n50, n20, n10, n5, n2;
    int m100, m50, m25, m10, m5, m1; 
    scanf("%d.%d",&notas,&moedas);
    n100 = notas/100;
    n50 = notas%100/50;
    n20 = notas%100%50/20;
    n10 = notas%100%50%20/10;
    n5 = notas%100%50%20%10/5;
    n2 = notas%100%50%20%10%5/2;
    m100 = notas%100%50%20%10%5%2/1;
    m50 = moedas/50;
    m25 = moedas%50/25;
    m10 = moedas%50%25/10;
    m5 = moedas%50%25%10/5;
    m1 = moedas%50%25%10%5/1;



    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", n100, n50, n20, n10, n5, n2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",m100,m50,m25,m10,m5,m1);
    return 0;
}
