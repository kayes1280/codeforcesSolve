#include<stdio.h>
int main()
{
    int n,sum=0,c=0;
    scanf("%d",&n);
    int a[105];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int num=sum/2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int d=0;
    for(int i=n-1; i>=0; i--){
        int d=d+a[i];
        c++;
        if(d>num){
            break;
        }
    }
    printf("%d\n",c);

    return 0;
}
