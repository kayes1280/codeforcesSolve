#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
   int ar;
    for(int i=0; i<n; i++){
        scanf("%d",&ar);
        sum=sum+ar;
    }
    sum = sum/n;
    printf("%f\n",sum);
    return 0;
}
