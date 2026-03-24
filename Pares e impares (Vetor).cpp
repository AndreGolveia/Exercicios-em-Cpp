#include <stdio.h>
#include <conio.h>

int main ()
{
    int vetor[10];
    int contador;
    
    for (contador=1; contador<10; contador++)
    {
    	printf("Insira o valor do (%d)\n", contador);
    	scanf("%d", &vetor[contador]);
    }
    
    
printf ("Pares:\n");
for (contador=1; contador<10; contador++)
    {
    if(vetor[contador] %2==0)
    {
    	printf("vetor[%d]=%d\n", contador, vetor[contador]);
    }
    }

printf("\nImpares:\n");
for (contador=1; contador<10; contador++)
    {
    	if(vetor[contador] %2!=0)
    {
    	printf("vetor[%d]=%d\n", contador, vetor[contador]);
    }
    }
    

getch();
return(0);

}

