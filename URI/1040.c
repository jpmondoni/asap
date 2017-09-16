#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, n3, n4, exame, media;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);

    n1= n1 * 2;
    n2= n2 * 3;
    n3= n3 * 4;
    n4= n4 * 1;
    media= (n1 + n2 + n3 + n4)/10;
    printf("Media: %.1lf\n", media);

    if(media < 5)
    printf("Aluno reprovado.\n");
    else if(media >= 5 && media < 7 )
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (media + exame) / 2;
        if(media < 5){
            printf("Aluno reprovado.\n");
        } else if (media >= 5){
            printf("Aluno aprovado.\n");
        }
        printf("Media final: %.1lf\n", media);
    } else{
        printf("Aluno aprovado.\n");
    }

    return 0;

}
