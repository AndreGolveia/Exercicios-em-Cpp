#include<stdio.h> 
#include<conio.h>
//André Gonçalves Oliveira RA:201306232, William Hideki RA:201307726 Turma: 2AEPM
int main()
{
	int maisvot[10000];
	int cand[10000];
	int votos, i, j, maior;
	
	maior=0;
	
	do
	{
		scanf("%d", &votos);
		
		if(votos<1||votos>10000)
		{
			printf("Esse numero e invalido. Coloque um numero entre 1 e 10000\n");
		}
		
	} while(votos<1||votos>10000);
	
	for(i=0; i<votos; i++)
	{
		
		do
	    {
		scanf("%d", &cand[i]);
		
		if(cand[i]<1||cand[i]>1000000000)
		{
			printf("Esse numero e invalido. Coloque um numero entre 1 e 1000000000\n");
		}
		
	    } while(cand[i]<1||cand[i]>1000000000);
	    
	    for(j=0; j<votos; j++)
			{
				if(cand[j]==0)
            	{	        
		        cand[j]=cand[i];
		        maisvot[j]++;
	        	}	  
				
				if(cand[j]==cand[i])  
				{
				maisvot[j]++;
			    }
			    
		    }
	    	
	}
	
	for(j = 0; j < votos-1; j++)
    {
        if(maisvot[j] > maisvot[j - 1])
         {
         maior=cand[j];  
		 }
    }
	
	printf("\n\n%d", maior);
	
	getch();
	return(0);
	
}
	
