#include <stdio.h>

int cont1=0, cont2=0, cont3=0, cont4=0;

int conteo(int x);

int main (){
	int peso, numal, i=0;
	printf ("Ingrese el numero de alumnos a comparar\n");
	scanf ("%d",&numal);
	while (i<numal){
		printf("Ingrese el peso del alumno %d:\n",i+1);
		scanf ("%d",&peso);
		conteo (peso);
		i++;
	}
	printf ("El resultado de estadistica es:\nAlumnos de menos de 40 kg: %d\nAlumnos entre 40 y 50 kg: %d\nAlumnos de mas de 50 kg y menos de 60 kg: %d\nAlumnos de mas o igual a 60 kg: %d",cont1,cont2,cont3,cont4);
}

int conteo (int x){
	if (x<40){
		cont1++;
	}
	else {
		if (x>=40 && x<=50){
			cont2++;
		}
		else {
			if (x>05 && x<60){
				cont3++;
			}
			else {
				cont4++;
			}
		}
	}
}