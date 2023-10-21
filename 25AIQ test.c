#include<stdio.h>
int main()
{
    int n,c=0,d=0,index1=0,index2=0;
    scanf("%d",&n);
    int a;
    for(int i=1; i<=n; i++){
        scanf("%d",&a);
        if(a%2==0){
            c++;
            index1=i;
        }
        else {
            d++;
            index2=i;
        }
    }
    if(c>d){
        printf("%d\n",index2);
    }
    else {
        printf("%d\n",index1);
    }

    return 0;
}
