#include<stdio.h>
int main()
{
    int t,c=0,i;
    scanf("%d",&t);
    int a,b;
    for(i=1; i<=t; i++){
            scanf("%d%d",&a,&b);
            if(a%b!=0){
                printf("%d\n",b-(a%b));
            }
            else {
                printf("0\n");
            }
    }

    return 0;
}
