#include <conio.h>     /* Para o prototipo da funcao putch().         */
#include <stdio.h>     /* Para o prototipo da funcao printf().        */

int main()
{
  int i, j;

  for( j = 1; j < 20; j++ )
  {
    for( i = 1; i < 20; i++ )
    if( i == j )
      putch( 219 );
    else
      putch( 176 );

    printf( "\n" );
  }

  printf( "\n\n" );

  return 0;
}

