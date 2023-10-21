#include<stdio.h>
int main()
{
    int n;
    int p,q,c=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d%d",&p,&q);
        if(q-p>=2){
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
