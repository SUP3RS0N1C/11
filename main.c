#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	return a/b;
}

int main() 
{
	int a, b;
	char op;
	
	int (*pf)(int,int);
	printf("claculate?");
	scanf("%d %c %d", &a, &op, &b);
	
	switch(op)
	{
		case'+':
			pf = sum;
			break;
		case'-':
			pf = sub;
			break;
		case'*':
			pf = mul;
			break;
		case'/':
			pf = divide;
			break;
		default:
			pf = sum;
			break;
	}
}
