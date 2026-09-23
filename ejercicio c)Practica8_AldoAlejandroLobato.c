#include <stdio.h>

int main () {
	int voto, totalv[5]={0};
	printf ("Bienvenido al menu de registro de votos.\n");
	do{
	printf ("\nPor favor seleccione el voto a registrar de la siguiente manera:\nIngrese 1) Para Andres Manuel Lopez obrador\n");
	printf ("Ingrese 2) Para Jose Antonio Meade Kuribena\nIngrese 3) Para Ricardo Anaya Cortes\n");
	printf ("Ingrese 4) Para Jaime Heliodoro Rodriguez Calderon \"El Bronco\"\nIngrese 0) Para terminar con el conteo\n");
	scanf ("%d",&voto);
	switch (voto){
		case 0:
		printf ("Entendido, acabando con el conteo");
		break;
		case 1:
			totalv[0]++;
			break;
		case 2:
			totalv[1]++;
			break;
		case 3:
			totalv[2]++;
			break;
		case 4:
			totalv[3]++;
			break;
		default:
			printf ("Lo sentimos el numero que registro no coincide con ningun candidato, intentelo de nuevo\n");
			break;
	}
	} while (voto>0);
	printf ("Los resultados de los votos son:\nPara Andres Manuel Lopez Obrador: %d.\nPara Jose Antonio Meade: %d.\n",totalv[0],totalv[1]);
	printf ("Para Ricardo Anaya: %d.\nPara \"El Bronco\": %d",totalv[2],totalv[3]);
	return 0;
}