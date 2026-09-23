#include <stdio.h>

int res[4]={0};

int cont(int a){
	if (a>0){
		res[0]++;
	}
	else{
		if (a<0){
			res[1]++;
		}
		else{
			res[2]++;
		}
	}
}

int main (){
	int vector[61],i=0;
	printf("Buenas tardes, en este programa vamos a calcular el numero de elementos positivos, negativos y ceros que tenga\nsu vector de 60 elementos:\n");
	do{
		printf ("\nIngrese el elemento %d: ",i+1);
		scanf ("%d",&vector[i]);
		cont(vector[i]);
		i++;
	} while (i<60);
	printf("\nEl numero de elementos positivos es: %d\nEl numero de elementos negativos es: %d\nEl numero de ceros es: %d",res[0],res[1],res[2]);
}