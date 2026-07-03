#include<stdio.h>
int main(){
    int a,b,sum,sub,mul,div;
    char operator;
    printf("Enter the operator:\n");
    scanf("%d",&operator);
    printf("Enter first operand:\n");
    scanf("%d",&a);
    printf("Enter second operator:\n");
    scanf("%d",&b);
    switch(operator){
    case '+' : sum= a+b;
    printf("sum=%d",sum);
    break;
    case '-' : sub= a-b;
    printf("sub=%d",sub);
    break;
    default : 
    printf("nothingf");
    }
    getch();
    return 0;
}