#include <stdio.h>

int main ( ) {
	int ang;
	printf ("Por favor ingrese el valor del angulo a analizar\n");
	scanf ("%d",&ang);
	while (ang>180){
		ang=ang-180;
	}
	if (ang<90){
		printf("\nEl angulo es un angulo agudo");
	}
	else{
		if (ang>90){
			printf ("\nEl angulo es un angulo obtuso");
		}
		else {
			printf ("\nEl angulo es un angulo recto");
		}
	}
}