#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("the values before change:%d,%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("the values after change:%d,%d",a,b);
	return 0;
}
