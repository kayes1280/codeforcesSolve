#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int  sum=0;
    sum=sum+n/100;
    n=n%100;
    sum=sum+n/20;
    n=n%20;
    sum=sum+n/10;
    n=n%10;
    sum=sum+n/5;
    n=n%5;
    sum=sum+n/1;
    printf("%d\n",sum);

    return 0;
}
