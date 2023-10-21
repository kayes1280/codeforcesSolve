#include<stdio.h>
int main()
{
    int a=0,b=0,c=0;
    scanf("%d%d",&a,&b);
    for(int i=a; i<=b; i++){
        if(a<=b){
            a=a*3;
            b=b*2;
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
