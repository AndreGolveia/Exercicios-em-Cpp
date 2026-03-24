#include<stdio.h>
#include<conio.h>
int main()
{
	int x, y;
	x=0;
	y=0;
	
	printf("Entre o valor de x\n");
	scanf("%d", &x);
	
	printf("Entre o valor de y\n");
	scanf("%d", &y);
	
	if(x>0 && y>0)
	{
		printf("Esta no primeiro quadrante.\n");
	}
	if(x<0 && y>0)
	{
		printf("Esta no segundo quadrante.\n");
	}
	if(x<0 && y<0)
	{
		printf("Esta no terceiro quadrante.\n");
	}
	if(x>0 && y<0)
	{
		printf("Esta no quarto quadrante.\n");
	}
	
	getch();
	return(0);
	
}
