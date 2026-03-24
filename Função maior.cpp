#include <conio.h>
#include <stdio.h>

int max(int x, int y)
{
	int maior;
	char fun;
	
	if(x > y)
	{
		fun='a';
		maior=x;
	}
	else
	{
		fun='b';
		maior=y;
	}	
	
	printf("funcao(%c)=%d\n", fun, maior);
	return(maior);
}

int main()
{
	int a, b, in;
	
	printf("A=");
	scanf("%d", &a);
	
	printf("B=");
	scanf("%d", &b);
	
	in=max(a,b);
	getch();
	
}

