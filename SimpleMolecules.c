#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b+c)%2==0){
        int x=(a+b-c)/2;
        int y=(b+c-a)/2;
        int z=(c+a-b)/2;
        if(x>=0 && y>=0 && z>=0){
            printf("%d %d %d\n",x,y,z);
        }
        else {
            printf("Impossible\n");
        }
    }
    else {
            printf("Impossible\n");
    }
    return 0;
}
