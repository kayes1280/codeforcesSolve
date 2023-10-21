#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k;

    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        char a[25][25];
        for(int i=0; i<n; i++){
            scanf("%s",a[i]);
        }
        char b[]="vika";
        int count=0;
        for(int i=0; i<m; i++){
                int  check =0;
            for(int j=0; j<n; j++){
                if(a[j][i]==b[count]){
                    check=1;
                }
            }
            if(check){
                count++;
            }
            if(count==4){
                break;
            }
        }
        if(count == 4){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }

    }

    return 0;
}
