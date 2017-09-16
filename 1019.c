#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, s, in;
    scanf("%d",&in);
    h=in/3600;
    m=in%3600/60;
    s=in%3600%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
