#include<stdio.h>
int main()
{
    int n,x,y,i,j,k,l;
    int c=0,d;
    scanf("%d",&n);
    int a[105],b[105];
    scanf("%d",&x);
    for(i=0; i<x; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);
    for( j=0; j<y; j++){
        scanf("%d",&b[j]);
    }
        for(k=1; k<=n; k++){
            for(l=0; l<x || l<y; l++){
                if(k==a[l] || k==b[l]){
                    c++;
                     break;
                }
            }
        }
        if(c==n){
            printf("I become the guy.\n");
        }
        else {
            printf("Oh, my keyboard!\n");
        }

    return 0;
}
