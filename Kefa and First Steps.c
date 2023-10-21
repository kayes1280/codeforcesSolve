#include<stdio.h>
int main()
{
       int n;
        int c=0,max=0;
        scanf("%d",&n);
        int ar[n];
        for(int i=0; i<n; i++){
            scanf("%d",&ar[i]);

        }
        for(int i=1; i<n; i++){

            if(ar[i-1]<=ar[i]){
                c++;
                if(c>max){
                max=c;
                }
            }

            else {
                c=0;
            }
        }
        printf("%d\n",max+1);
    return 0;
}

