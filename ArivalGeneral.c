#include<stdio.h>
int main()
{
    int n,c=0,max=0,min=200,maxp=0,minp=0,s=0,a;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        if(a<=min){
            min=a;
            minp=i;
        }
        if(a>max){
            max=a;
            maxp=i;
        }
    }
    s=n-1-minp;
    s=s+maxp;
    if(maxp>=minp){
        s=s-1;
    }
    printf("%d\n",s);


    return 0;
}
