#include <stdio.h>

int impre (int x){
	int i=0;
	do{
		printf ("*");
		i++;
	}while (i<x);
}

int main (){
	int cont,i=0;
	printf ("Buen dia, por favor ingrese el valor de la longitud de los lados del cuadrado\n");
	scanf ("%d",&cont);
	do{
		impre (cont);
		printf("\n");
		i++;
	}while (i<cont);
}