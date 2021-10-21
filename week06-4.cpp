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
    if (a+b<=c)
    printf("Error");
    else if(a*a+b*b==c*c) printf("ª½¨¤");
    else if(a*a+b*b>c*c) printf("¾U¨¤");
    else if(a*a+b*b<c*c) printf("¶w¨¤");
}
