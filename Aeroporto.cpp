//André Gonçalves Oliveira RA:201306232, William Hideki RA:201307726 Turma: 2AEPM
#include<stdio.h>
#include<conio.h>

int main()
{
	int x[10000], contv[10000];
	int A, V, i, j, cont, maior;
	
    cont=maior=0;
	
	do
	{
		scanf("%d", &A);
		
		if(A<=1||A>=100)
		{
			printf("Esse numero e invalido. Coloque um numero entre 1 e 100\n");
		}
		
	} while(A<=1||A>=100);
	
	do
	{
		scanf("%d", &V);
		
		if(V<=1||V>=10000)
		{
			printf("Esse numero e invalido. Coloque um numero entre 1 e 10000\n");
		}
		
	} while(V<=1||V>=10000);
	
	printf("\n");
	V=V*2;
	
    do
   {
   	  for (i = 0; i < V; i++)
      {
   	   	 	do
	        {
		     scanf("%d", &x[i]);
		
		    if(x[i]<=0||x[i]>=A+1)
		    {
			printf("Esse numero e invalido. Coloque o numero correto do aeroporto\n");
		    }
		
         	} while(x[i]<=0||x[i]>=A+1);
         	
	  }
	  
	  for(i=0; i<V; i++)
	  {
	  	for(j=0; j<V; j++)
			{
				if(x[j]==0)
            	{	        
		        x[j]=x[i];
		        contv[j]++;
	        	}	  
				
				if(x[j]==x[i])  
				{
				contv[j]++;
			    }
			    
			    
		    }
	  	
	  }
	  
	  	for(j = 0; j < V; j++)
        {
           if(contv[j] > contv[j - 1])
           {
           maior=x[j];  
		   }
        }
        
       
	  cont++;
	  printf("Teste %d \n%d\n", cont, maior);
	  
	  if(cont<2)
        {
        	do
	        {
		    scanf("%d", &A);
		
		    if(A<=1||A>=100)
		    {
			    printf("Esse numero e invalido. Coloque um numero entre 1 e 100\n");
		    }
		
	        } while(A<=1||A>=100);
	
	        do
	        {
		    scanf("%d", &V);
		
		    if(V<=1||V>=10000)
	     	{
			    printf("Esse numero e invalido. Coloque um numero entre 1 e 10000\n");
	    	}
		
        	} while(V<=1||V>=10000);
        	
        	printf("\n");
	        V=V*2;
		}
	  
   }while(cont<2);
   
   getch();
   return(0);
   
}

