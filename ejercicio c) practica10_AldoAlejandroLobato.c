#include<stdio.h>

int main (){
	int m, n, i, j, k, o=0;
	int arreglo[m][n];
	int *t=&o;	
	printf("Ingrese el numero de renglones que quiere en su arreglo\n");
	scanf ("%d",&m);
	printf("Ingrese ahora el numero de columnas que se quiere obtener del arreglo:\n");
	scanf ("%d",&n);
	k=m*n;
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Ingrese el valor del elemento ubicado en las coordenadas [%d],[%d]",i,j);
			scanf ("%d",&arreglo[i][j]);
			*t=*t+arreglo[i][j];
		}
	}
	printf ("El promedio de los valores obtenidos en entero son: %d",o/k);
}
	