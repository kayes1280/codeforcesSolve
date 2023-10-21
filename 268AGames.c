#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[105],b[105];
    for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            scanf("%d",&b[i]);
    }

    for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
            if(a[i]==b[j]){
                c++;
            }
       }
    }
    printf("%d\n",c);

    return 0;
}
