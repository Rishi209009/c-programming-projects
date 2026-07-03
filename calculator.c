#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
    char operater;
    printf("enter operater:\n");
    scanf("%c",&operater);
    printf("enter operands:\n");
    scanf("%d %d",&a,&b);
    switch(operater)
    {
        case '+' : sum= a+b;
        printf("sum=%d",sum);
        break;
        case '-' : sub= a-b;
        printf("sub=%d",sub);
        break;
        case '*' : mul= a*b;
        printf("mul=%d",mul);
        break;
        case '/' : div= a/b;
        printf("div=%d",div);
        break;
        default :
        printf("enter valid operater");
    }
    getch();
    return 0;
}