#include<stdio.h>
int main()
{
    int x=0,n,i;
    scanf("%d",&n);
    char a[5];
    for(i=0; i<n;i++){
        scanf("%s",a);

        if(a[1]=='+'){
            x++;
        }
         else if(a[1]=='-'){
            x--;
        }

    }
    printf("%d\n",x);

    return 0;
}
