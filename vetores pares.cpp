#include <stdio.h>
#include <conio.h>

int main ()
{
	int x[10];
	int i;
	int maior;
	
	maior=0;
	
	for(i=0;i<9;i++)
	{
		printf("De o valor do vetor[%d]:\n", i);
		scanf("%d", &x[i]);
	
	}
	
	for(i=0;i<9;i++)
	{
		if(x[i] %2==0)
		{
			
		printf("Vetor[%d]: %d\n", i, x[i]);
		
		}
	
	}
	
	printf("Maior vetor: %d", maior);
	
	getch();
	return(0);
}
