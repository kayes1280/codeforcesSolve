#include<stdio.h>
int main()
{
    int n;
    int c=0;
    scanf("%d",&n);
    int ar[]={4,7,44,47,77,74,444,777,447,477,774,744,474,747};
    for(int i=0; i<14; i++){
        if(n%ar[i]==0){
            c++;
        }
    }
    if(c>0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
