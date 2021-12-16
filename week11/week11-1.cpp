#include<stdio.h>
int a[9999999]={};
int main()
{
	int x;
	int z=0;
	scanf("%d",&x);
	for(int i=2;i<x;i++)
	{
		if(a[i]==0){
        printf("%d ",i);
		z++;
		for(int k=i+i;k<x;k=k+i)
		a[k]=1;
		}
	}
	printf("\n%d",z);
}
