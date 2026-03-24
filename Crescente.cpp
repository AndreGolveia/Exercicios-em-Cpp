#include <stdio.h>
#include <conio.h>

int main ()
{

    int maior, medio, menor, valor, contador;

    contador=1;    
   

    do
    {
        printf("Insira o valor %d:", contador);
        scanf("%d", &valor);
        contador=contador+1;

        if (valor>maior)
        
            maior=valor;
                    
		 else

        if (valor>menor)
        
            menor=valor;
            
            else
            
            if(valor>menor && valor<maior)
            
            medio=valor;
            
    }while (contador!=4);

    printf("Maior: %d \n", maior);
    printf("Medio: %d \n", medio);
    printf("Menor: %d \n", menor);

getch();
return(0);
}
