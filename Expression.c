#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b*c;
    e=a*(b+c);
    f=a*b*c;
    g=(a+b)*c;
    h=a+b+c;
    i=a*b+c;
    if(d>=e && d>=f && d>=g && d>=h && d>=i){
        printf("%d\n",d);
    }
    else if(e>=d && e>=f && e>=g && e>=h && e>=i){
        printf("%d\n",e);
    }
    else if(f>=d && f>=e && f>=g && f>=h && f>=i){
        printf("%d\n",f);
    }else if(g>=d && g>=e && g>=f && g>=h && g>=i){
        printf("%d\n",g);
    }else if(h>=d && h>=e && h>=f && h>=g && h>=i){
        printf("%d\n",h);
    }else {
        printf("%d\n",i);
    }
    return 0;
}
