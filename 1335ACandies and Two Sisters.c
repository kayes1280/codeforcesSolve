#include<stdio.h>
int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%lld",&n);
        if(n%2==0 && n>2){
                printf("%lld\n",(n/2)-1);
            }
            else if(n%2!=0 && n>2){
                printf("%lld\n",n/2);
            }
            else {
                printf("0\n");
            }

        }

    return 0;
}
