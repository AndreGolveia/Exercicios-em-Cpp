#include<stdio.h>
#include<conio.h>
int main()
{
	int empate, vitA, vitB, timeA, timeB, contador;
	
	empate=0;
	vitA=0;
	vitB=0;
	timeA=0;
	timeB=0;
	contador=0;
	
	do
	{
	
	contador=contador+1;
	
	printf("\nJogo %d:\nTime A:  ", contador);
	scanf("%d", &timeA);
	
	printf("Time B:  ");
	scanf("%d", &timeB);
	
	if(timeA>timeB)
	{
		vitA=vitA+1;
	}
	
	if(timeA<timeB)
	{
		vitB=vitB+1;
	}
	
	if(timeA==timeB)
	{
		empate=empate+1;
	}
	
    }while(contador<4);
    
    printf("\nVitorias de A: %d\nVitorias de B: %d\nEmpates: %d", vitA, vitB, empate);
    
    getch();
    return(0);
}
