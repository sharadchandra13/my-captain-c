#include<stdio.h>
int main()
{
	printf("1.Pizza,Rs 239\n2.Burger,Rs 129\n3.Pasta,Rs 179\n4.French Fries,Rs 99\n5.Sandwich,Rs 149\n");
	int op=0;
	scanf("%d",&op);
	switch(op)
	{
		case 1: printf("Food item- Pizza\n\nPrice - Rs 239\n");break;
		case 2: printf("Food item- Burger\n\nPrice - Rs 129\n");break;
		case 3: printf("Food item- Pasta\n\nPrice - Rs 179\n");break;
		case 4: printf("Food item- French Fries\n\nPrice - Rs 99\n");break;
		case 5: printf("Food item- Sandwich\n\nPrice - Rs 149\n");break;
	}
	return 0;
}
