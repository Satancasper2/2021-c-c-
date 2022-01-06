#include<stdio.h>
int a[100000000];
int main()
{
    int b=0;
    for(int i=2;i<100000000;i++)
    {
        if(a[i]==0)
        {
            b++;
            for(int k=i+i;k<100000000;k=k+i)a[k]=1;
        }
    }
    printf("%d",b);
}
