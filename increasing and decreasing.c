#include<stdio.h>
int main()
{
   int t,x,y,n;
   scanf("%d",&t);
   for(int i=1; i<=t; i++){
            scanf("%d%d%d",&x,&y,&n);
            if(x>y){
                printf("-1");
                return 0;
            }
            int a[n];
            a[0]=x;
            a[n-1]=y;
            for(int i=0; i<n; i++){
                a[i]=a[n]-a[0];
                printf("%d\n",a[i]);
                if(a[i]>=n-1){
                    printf("%d\n",a[i]);
                    //continue;
                }
                else {
                    printf("-1 ");
                    break;
                }
                printf("\n");
            }

   }

    return 0;
}
