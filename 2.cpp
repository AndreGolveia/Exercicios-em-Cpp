#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int palpite,escondido,tentativas;
	srand((unsigned int)time(0));
	escondido=rand()%100+1;
	tentativas=0;
	do{
		printf("Palpite?\n");
		scanf("%d",&palpite);
		tentativas=tentativas+1;
		if(palpite>escondido)
		{
		printf("O numero e menor\n");
	}
	else
	{
		printf("O numero e maior\n");
		}
		
	}while(palpite!=escondido);
	printf("Parabens vc ganhou!!! Em %d tentantivas\n",tentativas);
	getch();
	return(0);
	}
