#include<stdio.h>
#include<conio.h>

int main()
{
	int x[10000];
	int N, M, i, aux, cont, A;
	
	aux=cont=0;
	
	do
	{
		printf("Insira o valor de N (Partidas jogadas)\n");
		scanf("%d", &N);
		
		if(N<=1||N>=10000)
		{
			printf("Esse numero e invalido. Coloque um numero entre 1 e 10000\n");
		}
		
	} while(N<=1||N>=10000);
	
	do
	{
		printf("Insira o valor de M (Linhas do ranking)\n");
		scanf("%d", &M);
		
		if(M<=1||M>=500||M>N)
		{
			printf("Esse numero e invalido. Coloque um numero entre 1 e 500 e menor que N\n");
		}
		
	} while(M<=1||M>=500||M>N);
	
	for(i=1;i<=N;i++)
	{
		printf("Insira o valor do jogo[%d]\n",i);
		scanf("%d", &x[i]);
	}
	
	printf("Ranking:\n");
	
	do
	{
		for(i=1;i<=N;i++)
	    {
	      if(x[i]>aux)
	      {
	      	aux=x[i];
	      	A=i;
	      }
	    }
	    
	    printf("%d\n",aux);
	    
        x[A]=0;
        aux=0;
        cont=cont+1;
	    
	}while(cont<M);
	
	getch();
	return(0);
}
