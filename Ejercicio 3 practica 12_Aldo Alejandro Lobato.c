#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	FILE *f;
	char prueba [50], pal[50];
	int i=0;
	f =fopen("fichero.txt","r");
	if (f==NULL){
		printf ("Algo anda mal, no se puede abrir el fichero");
	}
	while (!feof(f)){
		fgets(prueba,50,f);
		printf ("%s",prueba);
	}
	for
	printf ("%s",pal);
	FILE *t;
	t=fopen("FICHERO2.txt","w");
	if (f==NULL){
		printf ("\nAlgo anda mal, no se puede abrir el fichero");
	}
}