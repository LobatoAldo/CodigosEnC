#include <stdio.h>

char val;

int impre (int x){
	int i=0, j=0; 
	do{
		do{
			putchar (val);
			j++;
		}while (j<x);
		printf("\n");
		i++;
	}while (i<x);
}

int main (){
	int cont,i=0;
	char val;
	printf ("Buen dia, por favor ingrese el valor de la longitud de los lados del cuadrado\n");
	scanf ("%d",&cont);
	printf ("Ahora escriba el caracter que vaya a conformar el cuadrado");
	3val=getchar();
	impre (cont);
}