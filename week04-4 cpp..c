#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(100>=a && a>=90)
	printf("A+");
	if(89>=a && a>=80)
	printf("A");
	if(79>=a && a>=70)
	printf("B");
	if(69>=a && a>=60)
	printf("C");
	if(50>=a)
	printf("D");
}
