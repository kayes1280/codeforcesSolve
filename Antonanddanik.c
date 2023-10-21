#include<stdio.h>
int main()
{
    long int n;
    int i,c=0,d=0;
    scanf("%d",&n);
    char s1[n+5];
    scanf("%s",s1);
    for(i=0; i<n; i++){
        if(s1[i] == 'A'){
            c++;
        }
        else {
            d++;
        }
    }
    if(c>d){
        printf("Anton\n");
    }
    else if(c<d){
        printf("Danik\n");
    }
    else {
        printf("Friendship\n");
    }

    return 0;
}
