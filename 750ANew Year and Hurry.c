#include<stdio.h>
int main()
{
    int n,k,h=240,x=0,y=0;
    scanf("%d%d",&n,&k);
    int v=h-k;
    for(int i=1; i<=n; i++){
        x +=5*i;
        if(x<=v){
            y=i;
        }
        else {
            break;
        }
    }
    printf("%d\n",y);

    return 0;
}
