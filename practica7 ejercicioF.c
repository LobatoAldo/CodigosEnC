#include <stdio.h>

int main (){
	int calf;
	do {
	printf ("Por favor ingrese la calificacion del alumno: \n");
	scanf ("%d",&calf);
	if (calf<0 || calf>100){
	printf("\nEl numero que ingreso no corresponde a ninguna calificacion, por favor intentelo de nuevo\n");
	}
}while (calf<0 || calf>100 );
	if (calf>=90) {
		printf ("\nLa calificacion corresponde a una \"A\"");
	}
	else {
		if (calf<90 && calf>=80){
			printf("La calificacion corresponde a una \"B\"");
		}
		else {
			if (calf<80 && calf>=70){
				printf("La calificacion corresponde a una \"C\"");
			}
			else {
				if (calf<70 && calf>=69){
					printf("La calificacion corresponde a una \"D\"");
				}
				else {
				printf("La calificacion corresponde a una \"F\"");	
				}
			}
		}
	}
}