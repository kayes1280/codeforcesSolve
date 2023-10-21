#include<stdio.h>
int main()
{
    long long int n,w;
    int k,c,i,t;
    scanf("%d%lld%lld",&k,&n,&w);

   for(i=1; i<=w; i++){
            c=c+k*i;
            t=c-n;
   }
   if(t<=0){
    printf("0\n");
   }
   else {
    printf("%d\n",t);
   }

    return 0;
}
