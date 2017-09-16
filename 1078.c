#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, i, r;
    scanf("%d",&m);
    for(i=1;i<11;i++){
        r = i * m;
        printf("%d x %d = %d\n",i,m,r);
    }


}
