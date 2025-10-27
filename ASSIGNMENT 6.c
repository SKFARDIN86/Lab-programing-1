#include<stdio.h>
int main()
{
	int p,r,t;
	float si;
	printf("Enter Your Principal:");
	scanf("%d",&p);
	printf("Enter Your rate:");
	scanf("%d",&r);
	printf("Enter Your time:");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("Your Simple Interest:%.2f\n",si);
	return 0;
}
