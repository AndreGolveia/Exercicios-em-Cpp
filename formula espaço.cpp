#include <conio.h>
#include <stdio.h>

float formula(float so, float vo, float t, float a)
{
	float s;
	
	s=so+(vo*t)+((a*(t*t))/2);
	
	printf("s= %f",s);
	return(0);
	
}

int main()
{
	float sox, vox, tx, ax, formx;
	
	printf("So, Vo, t, a\n");
	scanf("%f", &sox);
	scanf("%f", &vox);
	scanf("%f", &tx);
	scanf("%f", &ax);
	
	formx=formula(sox,vox,tx,ax);
	
	getch();
}
