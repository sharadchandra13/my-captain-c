#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values of a,b: \n");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a:%d\n b:%d\n",a,b);
	return 0;
}
