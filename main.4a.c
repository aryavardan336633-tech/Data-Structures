#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
     if(b==0)
        return a;
    return gcd(b,a%b);

}
int main()
{
    int a,b,res;
    printf("\n read 2 nos:");
    scanf("%d%d",&a,&b);
    res=gcd(a,b);
    printf("\n gcd %d and %d is %d",a,b,res);
return 0;
}
