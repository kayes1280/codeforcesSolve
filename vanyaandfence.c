#include<stdio.h>
int main()
{
    int n,h,c=0;
    int ar;
    scanf("%d%d",&n,&h);
    for(int i=1; i<=n; i++){
        scanf("%d",&ar);
        if(ar<=h){
            c++;
        }
        else {
            c=c+2;
        }
    }
    printf("%d\n",c);

    return 0;
}
