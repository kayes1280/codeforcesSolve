#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    char s1[55];
    scanf("%s",s1);
    for(i=0; i<n; i++){
        if(s1[i]==s1[i+1]){
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
