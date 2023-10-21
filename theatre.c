#include<stdio.h>
int main ()
{
    long long int n,m,a;
    long long int temp,semp,count;
    scanf("%lld%lld%lld",&n,&m,&a);

    temp=n/a;
    semp=m/a;
    if(n%a>0){
        temp=temp+1;
    }
    if(m%a>0){
            semp=semp+1;
    }
     count=temp*semp;
    printf("%lld\n",count);

    return 0;
}
