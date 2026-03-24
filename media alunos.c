#include<stdio.h>
#include<conio.h>
int main()
{
    int media, nota, notatotal, contador;
     
     nota=0;
	 notatotal=0;
     media=0;
     contador=0;
     
     do
	 {
	 	
	 contador=contador+1;
	 notatotal=nota+notatotal;
	 
	 printf("Qual a nota do aluno numero %d?\n", contador);
	 scanf("%d", &nota);
	 
	 
	 
	 } while(nota>0);
	 
     media=notatotal/contador;
     
     printf("\nMedia das notas: %d", media);
     
     getch();
     return(0);


}

