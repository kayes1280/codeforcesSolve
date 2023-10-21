#include<stdio.h>
int main()
{
    int t;
     int c=0;
    scanf("%t",&t);
    int ar[56];
    for(int i=0; i<t; i++){
        scanf("%d",&ar[i]);
        int temp=ar[0];

        for(int j=0; j<temp; j++){
                if(temp>0){
                    ar[0]--;
                    c++;
                }
                if(temp<0){
                    ar[0]++;
                    c++;
                }
                else {
                    printf("0\n");
                    break;
                }
            }

        }
        printf("%d\n",c);

    return 0;
}
