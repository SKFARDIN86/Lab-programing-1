#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("the values before change:%d,%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the values after change:%d,%d",a,b);
	return 0;
}
