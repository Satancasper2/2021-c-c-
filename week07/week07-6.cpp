#include<stdio.h>
int main()
{
	int a;
	float sum=0;
	int i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		int b;
		scanf("%d",&b);
		sum=sum+b;
	}
	printf("%.2f",sum/a);
}
