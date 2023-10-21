#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=0,c=0;
    int x,y,z;
     for(int i=0; i<n; i++){
        scanf("%d%d%d",&x,&y,&z);
        a=a+x;
        b=b+y;
        c=c+z;
     }
     if(a==0 && b==0 && c==0){
        printf("YES\n");
     }
     else {
        printf("NO\n");
     }

    return 0;
}
