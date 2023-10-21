#include<stdio.h>
int main()
{
    int n,arr[105];
    int sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    if(sum == 0){
        printf("EASY\n");
    }
    else {
        printf("HARD\n");
    }
    return 0;
}
