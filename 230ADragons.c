#include<stdio.h>
int main()
{
    int s=0,n;
    scanf("%d%d",&s,&n);
    int x,y;
    int check=0;
    for(int i=1; i<=n; i++){
        scanf("%d%d",&x,&y);

        if(s>x ){
            s=y+s;
            check=1;
        }
    }
    if(check){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
