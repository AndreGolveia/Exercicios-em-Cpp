//André Gonçalves Oliveira RA:201306232, William Hideki RA:201307726 Turma: 2AEPM
#include<stdio.h>
#include<conio.h>
#include <string.h>


int main()
{
	char n[100][30], a[30];
	int N, K, i, j;
	
	scanf("%d", &N);
	scanf("%d", &K);
	
	for(i=0; i<N+1; i++)
	{
		gets(n[i]);
	}
	
    for(j=0; j<N+1; j++)
	{
       for(i=0; i<N; i++)
	   {
           if(strcmp(n[i], n[i + 1]) > 0)
		   {
              strcpy(a, n[i]);
              strcpy(n[i], n[i + 1]);
              strcpy(n[i + 1], a); 

           }
        } 
     }                                         
                           
    for(i=0; i<N+1; i++)
   {  
       if(i==K)
       {
	   printf("\n%s",n[i]);
	   }
   }
   
 return(0);
 }
