#include <stdio.h>
#define MAX_ALUNOS 1000
int main()
{
    int i, indice_melhor, n;
    int turma=1, cont=0;
    
    struct
    {
        int codigo, media;
    } alunos[MAX_ALUNOS];
    
    do
	{
       scanf("%d", &n);
	}while(n < 0 || n > 1000);
	
    do
    {
       for (i = 0; i < n; i++)
       {
       	  do
       	  {
             scanf("%d ", &alunos[i].codigo);
	      }while(alunos[i].codigo < 1 || alunos[i].codigo > 20000);
	      
	      do
       	  {
             scanf(" %d", &alunos[i].media);
	      }while(alunos[i].media < 0 || alunos[i].media > 100);
       }
   
        indice_melhor = 0;
        
        for (i = 1; i < n; i++)
        {
            if (alunos[i].media > alunos[indice_melhor].media)
            {
            indice_melhor = i;
            }
        }

        printf("Turma %d\n", turma++);
        
        for (i=0; i < n; i++)
        {
        	if(alunos[i].media == alunos[indice_melhor].media)
        	{
        		printf("%d " , alunos[i].codigo);
        	}
        }
        
        printf("\n\n"); 
        
        if(cont<1)
        {
        scanf("%d", &n);
		}
		
        cont=cont+1;
        
    }while(cont<2);
    
    n=0;
    printf("%d",n);
    return (0);
}
