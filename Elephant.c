#include<stdio.h>
int main()
{
    long long int x;
    int count=0,i;
    scanf("%lld",&x);

    for(i=1; i<=x; i=i+5){
    if(x>0){
        count++;
    }
    }
    printf("%d\n",count);

    return 0;
}
