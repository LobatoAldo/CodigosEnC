#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h> 


int main (){
	char c;
	int a=1,x,y;
	printf ("\n\n\n\nBienvenido a la opcion de la calculadora normal\n");
	printf ("\nAntes de empezar algunas instrucciones: al iniciar esta parte del programa te pediran dos numeros, estos seran\nlos que se van a usar para la operacion");
	printf ("que usted vaya a seleccionar, luego\nle pediran que ingrese un signo, si es el signo especificado se hara lo que se deba hacer, sino\n el programa no hara nada.\n");
	printf ("\nDespues se le dara la opcion de continuar con la operacion, esto significa que puede seguir usando la calculadora\n con la misma variable antes obtenida haciendole");
	printf (" las operaciones establecidas una y otra vez hasta que se canse\no pasar a otra operacion, no sin antes preguntarle si desea acabar con esta parte del programa primero");
	do {
	printf ("\nIngrese el primer numero de la suma\n");
	scanf ("%d",&x);
	do{
	printf ("\nIngrese el siguiente numero de la operacion\n");
	scanf ("%d",&y);
	printf ("\nLas opciones para la operacion son:\nEscribir \"+\" para suma de numeros.\nEscribir \"-\" para resta de numeros.");
	printf ("\nEscribir \"*\" o \"x\" para multiplicacion de numeros.\nEscribir \"/\" para division de numeros.\n");
	printf ("Escribir \"%\" para el cociente de la division de numeros.\n\nIngrese el signo de la operacion que quiera hacer:");
	scanf ("%c",&c);
	if (c== "+"){
		x=x+y;
		printf("\nEl resultado de la suma es: %d\n",x);
	}
	if (c== "-"){
		x=x-y;
		printf("\nEl resultado de la resta es: %d\n",x);
	}
	if (c== "*" || c== "x"){
		x=x*y;
		printf("\nEl resultado de la multiplicacion es: %d\n",x);
	}
	if (c== "/"){
		x=x/y;
		printf("\nEl resultado de la division es: %d\n",x);
	}
	if (c== "%"){
		x=x+y;
		printf("\nEl cociente es: %d\n",x);
	}
	printf ("si quiere salir de la operacion registre 1, sino, registre cualquier otro numero");
	scanf ("%d",&a);
	} while (a!=1);
	printf ("si quiere dejar de hacer operaciones registre 0, sino, registre cualquier otro numero");
	scanf ("%d",&a);
}while(a!=0);
}

//printf ("\nSeleccione cual opcion es la que quiere usar:\n1) Suma:\n2) Resta:\n3) Multiplicacion:\n4) Division:\n5) Cociente:\n\nPara salir presione cualquier otro numero\n");
	//scanf ("%d",&t);
	//switch (t){
		//case 1:
			//printf ("\nIngrese el primer numero de la suma\n");
			//scanf ("%d",&x);
			//printf ("\nIngrese el segundo numero de la suma\n");
			//scanf ("%d",&y);
			//x=x+y;
			//printf("\nEl resultado de la suma es: %d\n",x);
			//break;
		//case 2: 
		    //printf ("\nIngrese el primer numero de la resta\n");
			//scanf ("%d",&x);
			//printf ("\nIngrese el segundo numero de la resta\n");
			//scanf ("%d",&y);
			//x=x-y;
			//printf("\nEl resultado de la resta es: %d\n",x);
			//break;
		//case 3:
			//printf ("\nIngrese el primer numero de la multiplicacion\n");
			//scanf ("%d",&x);
			//printf ("\nIngrese el segundo numero de la multiplicacion\n");
			//scanf ("%d",&y);
			//x=x*y;
			//printf("\nEl resultado de la multiplicacion es: %d\n",x);
			//break;
		//case 4:
		//	printf ("\nIngrese el primer numero de la division\n");
		//	scanf ("%d",&x);
		//	printf ("\nIngrese el segundo numero de la division\n");
		//	scanf ("%d",&y);
		//	x=x/y;
		//	printf("\nEl resultado de la division es: %d\n",x);
		//	break;
	//	case 5:
	//		printf ("\nIngrese el primer numero del calculo del cociente\n");
	//		scanf ("%d",&x);
	//		printf ("\nIngrese el segundo numero del calculo del cociente\n");
	//		scanf ("%d",&y);
	//		x=x-y;
	//		printf("\nEl cociente es: %d\n",x);
	//		break;
	//	default:
	//		a=0;
	//		printf("\nUn gusto haberle ayudado\n\n\n\n");
	//		break;
	//	}