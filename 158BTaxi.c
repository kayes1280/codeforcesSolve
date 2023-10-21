#include<stdio.h>
int main()
{
    int n,a,sum=0;
    scanf("%d",&n);
    int ar[5];

    for(int i=0; i<5; i++){
        ar[i]=0;
    }
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        ar[a]=ar[a]+1;
    }
    sum=sum+ar[4];
    sum=sum+ar[3];
    ar[1]=ar[1]-ar[3];
    sum=sum+ar[2]/2;
    if(ar[2]%2>0){
        sum=sum+1;
        ar[1]=ar[1]-2;
    }
    if(ar[1]>0){
        sum=sum+ar[1]/4;
        if(ar[1]%4>0){
            sum=sum+1;
        }
    }
    printf("%d\n",sum);

    return 0;
}

