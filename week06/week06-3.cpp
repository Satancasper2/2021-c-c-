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

    printf("你看，最大的在c:%d",c);
}
