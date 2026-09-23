#include <stdio.h>

int main (){
	int a;
	printf ("Ingrese un numero a analizar\n");
	scanf ("%d",&a);
	if (a>0){
		printf ("El numero es positivo");
	}
	else{
		if (a<0){
			printf ("El numero es negativo");
		}
		else{
			printf ("El numero es cero, no es ni positivo ni negativo");
		}
	}
}