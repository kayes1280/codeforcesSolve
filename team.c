#include<stdio.h>
int main ()
{
    int n,i,count=0;
    int p,v,t;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d%d%d",&p,&v,&t);
        if((p==1) && (v==1) && (t==1)){
            count++;
        }else if((p==1) && (v==1) && (t==0)){
            count++;
           }else if((p==1) && (v==0) && (t==1)){
               count++;
             }else if((p==0) && (v==1) && (t==1)){
                count++;
            }
           }
    printf("%d\n",count);

    return 0;
}
