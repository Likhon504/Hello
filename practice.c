#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div,mod;
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf(" %d\n %d\n %d\n %d\n %d\n",sum,sub,mul,div,mod);
    return 0;
}
