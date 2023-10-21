#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max,min,c=0;
    int a[1005];
    scanf("%d",&a[0]);
        max=a[0];
        min=a[0];

    for(int i=1; i<n; i++){
        scanf("%d",&a[i]);

        if(a[i]<min){
            min=a[i];
            c++;
        }
        if(a[i]>max){
            max=a[i];
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
