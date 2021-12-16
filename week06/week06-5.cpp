#include<stdio.h>
int main()
{
    int a,b,c;
    int temp;
    scanf("%d%d%d",&a,&b,&c);
    if (c<a)
    {
    temp=c;
    c=a;
    a=temp;
    }
    if (c<b)
    {
    temp=c;
    c=b;
    b=temp;
    }
    if (a<b)
    {
    temp=a;
    a=b;
    b=temp;
    }
    printf("%d %d %d",b,a,c);
}
