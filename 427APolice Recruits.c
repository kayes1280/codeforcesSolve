#include<stdio.h>
int main()
{
    int n,c=0,k=0;
    scanf("%d",&n);
    int a;
    for(int i=1; i<=n; i++){
        scanf("%d",&a);

        if(a==-1){
            if(k==0){
                c++;
            }
            else {
                k--;
            }
        }
        else if(a>-1){
            k +=a;
        }
    }
    printf("%d\n",c);

    return 0;
}

