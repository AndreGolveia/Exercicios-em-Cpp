#include <stdio.h>
#include <conio.h>

int main()
{

    char c,frase[200];
    int cont;
    cont=0;

    printf("frase: \n");
    gets(frase);

    for(c=0;frase[c]!=0;c++)
    {
        if(frase[c]=='usjt')
        {
            cont=cont+1;
        
        }

    }

    printf("\n Quantidade: ", cont);
    getch();
    return(0);
}
