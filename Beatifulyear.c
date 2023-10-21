#include<stdio.h>
int main()
{
    int n,t,s;
    int ar[10];
    scanf("%d",&n);
    t=n+1;
    while(1){
            s=t;
         ar[0]=s%10;
         s=s/10;
         ar[1]=s%10;
         s=s/10;
         ar[2]=s%10;
         s=s/10;
         ar[3]=s%10;
         if(ar[0]!=ar[1] && ar[0]!=ar[2] && ar[0]!=ar[3]&& ar[1]!=ar[2] && ar[1]!=ar[3] && ar[2]!=ar[3])
            break;
            t++;
    }
 printf("%d\n",t);
    return 0;
}
