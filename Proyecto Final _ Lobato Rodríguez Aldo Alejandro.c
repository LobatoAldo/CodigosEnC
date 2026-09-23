#include <stdio.h>
#include <math.h>

int calcunom (int t);
int potraiz (int t);
int comparacion (int t);
int constantes (int t);
int fderivar (int t);
int fintegrar (int t);
int logaritmo (int t);

void main () {
	int i=0,a=1,res;
	printf ("Buen dia, en este programa se van a usar distintos subprogramas para ayudarte a resolver distintos problemas matematicos\nya sea dandote algunas formulas para realizar");
	printf (" tus operaciones o dandote una calculadora dividida en distintos campos \npara hacer tus operaciones matematicas por ti o ayudarte con ellas:");
	do {
		a++;
		printf ("\nPara poder acceder a cada una de las opciones necesitara presionar la tecla correspondiente:\n1) Calculadora Normal (suma, resta, multiplicacion, ");
		printf ("division, cociente):\n2)Potencias y Raices:\n3)Comparacion:\n4)Registro de algunas constantes fisicas basicas:");
		printf("\n5)Registro de formulas para derivar:\n6)registro de formulas para integrar:\n");
		printf ("7)Logaritmos, Natural y en Base 10:\n\nPresione cualquier otro numero si desea salir de la calculadora:\n");
		scanf ("%d",&res);
		switch (res){
		case 1:
			calcunom(i);
			break;
		
		case 2:
			potraiz(i);
			break;
		
		case 3:
			comparacion(i);
			break;
		
		case 4:
			constantes(i);
			break;
		
		case 5:
			fderivar (i);
			break;
		
		case 6:
			fintegrar (i);
			break;
		
		case 7:
			logaritmo (i);
			break;
		
		
		default:
			a=0;
			printf ("\nUn gusto haberle servido");
			break;
		
		}
	} while (a!=0);
}

int potraiz (int t){
	int a=1;
	double pot,raiz,x,y;
	printf ("\n\nBienvenido a la opcion de Potencias y Raices\n");
	do{
	printf ("\nSeleccione cual opcion es la que quiere usar:\n1) Raiz Cuadrada: \n2) Potencia: \n\nPara salir presione cualquier otro numero\n");
	scanf ("%d",&t);
	switch (t){
		case 1:
			printf ("\nIngrese el numero a sacar la raiz cuadrada del mismo\n");
			scanf ("%lf",&x);
			raiz=sqrt(x);
			printf("\nLa raiz cuadrada de %f es: %f\n",x,raiz);
			break;
		case 2: 
		    printf ("\nPrimero ingreso el numero que se elevara a la potencia posteriormente establecida\n");
		    scanf ("%lf",&x);
		    printf ("\nAhora ingrese la potencia a la que se elevera el numero anterior\n");
		    scanf ("%lf",&y);
		    pot=pow(x,y);
		    printf("\nLa potencia de %f elevada a la %f es: %f\n",x,y,pot);
		    break;
		default:
			a=0;
			printf("\nUn gusto haberle ayudado\n\n\n\n");
	}
	} while (a!=0);
}

int comparacion (int t){
	int a=1,p,j;
	printf ("\n\nBienvenido a la opcion de comparacion\n");
	do {
		printf ("Escoja entre las 3 opciones presionando en su respectivo numero:\n1) Para comparar numeros en orden descendente:\n2)para comparar numeros en orden ascendente:\n");
		printf ("\n3.-para salir puede presionar el 3 o cualquier otro numero\n");
		scanf ("%d",&t);
		switch (t){
		default: 
		   printf("\nUn gusto haberle ayudado\n\n\n\n");
		   a=0;
		   break;
		case 1:
			a=1;
			printf ("Ingrese el primer numero a comparar:\n");
			scanf ("%d",&p);
			do{
				printf("\nIngrese el siguiente numero a comparar: (para salir ingrese un numero mayor o igual al puesto anteriormente)\n");
				scanf("%d",&j);
				if (j<p){
					p=j;
					printf ("\nEl numero menor es: %d\n",p);
				}
				else{
					printf("\nVolviendo al menu anterior.\n\n");
					a=2;
				}
			}while (a==1);
			break;
		case 2: 
		    a=1;
			printf ("Ingrese el primer numero a comparar:\n");
			scanf ("%d",&p);
			do{
				printf("\nIngrese el siguiente numero a comparar: (para salir ingrese un numero menor o igual al puesto anteriormente)\n");
				scanf("%d",&j);
				if (j>p){
					p=j;
					printf ("\nEl numero mayor es: %d\n",p);
				}
				else{
					printf("\nVolviendo al menu anterior.\n\n");
					a=2;
				}
			}while (a==1);
			break;
	}
	} while (a!=0);
}

int constantes (int t){
	char q[50];
	printf ("\n\nBienvenido a la lista de constantes fisicas, a continuacion se enumerara una reducida lista con distintas \nconstantes agrupadas para su conocimento: \n");
	printf ("Basado en una tabla de constantes fisicas\n\n");
	printf ("1.-Numero de Avogadro: Simbolo: N; Valor: 6.02*10^23[moleculas/mol].\n\n2.-Carga Elemental: Simbolo: e; Valor:1.6*10^-19[C].\n\n");
	printf ("3.-Constante de Bolsman: Simbolo: k; Valor: 1.38*10^23[J/molecula K].\n\n4.-Constante de Faraday: Simbolo: F; Valor: 9.65*10^4[C/mol].\n\n");
	printf ("5.-Constante de Planck: Simbolo: h; Valor: 6.63*10^-34[Js].\n\n6.-Constante Gravitacional: Simbolo: G; Valor: 6.67*10^-11[Nm^2/kg^2].\n\n");
	printf ("7.-Constante Universal de los Gases: Simbolo: R; Valor: 8.31 [J/molK].\n\n8.-Rapidez de la luz: 3*10^8[m/s].\n\n9.-Relacion Carga-Masa del ");
	printf ("Electron: Simbolo: e/m; Valor: 1.76^10^11[C/kg].\n\n10.-Relacion Quantum-Carga del Electron: Simbolo: h/e; Valor: 4.14*10^-15[Js/C].");
	printf ("\n\nPara salir ingrese cualquier numero o letra abajo:\n");
	scanf ("%s",&q);
	printf ("\n\n\n\n");
}

int fderivar (int t){
	char q[50];
	printf ("\n\nBienvenido a la lista de formulas de derivacion basica, a continuacion se enumerara una reducida lista\ncon distintas formulas basicas de ");
	printf ("derivadas agrupadas para su conocimento basandome en el formulario de la copadi:\n\n");
	printf ("1.- Si \"y=cu\"; u=f(x) y c=(Numero Real) => dy/dx= c(du/dx).\n\n2.- c=(Numero Real) => dc/dx=0.\n\n");
	printf ("3.- y=x => dy/dx=1.\n\n4.- y=raiz cuadrada de u con u=f(x) => dy/dx=(du/dx)/2(raiz cuadrada de u).\n\n");
	printf ("5.- \"y=u^n\"; u= f(x); n=(Numero Real) => dy/dx= (n(u)^n-1)du/dx.\n\n6.- y=u+-v; u=f(x), v=g(x) => dy/dx = (du/dx) +- (dv/dx).\n\n");
	printf ("7.- y=uv; u=f(x), v=g(x) => dy/dx = u(dv/dx) + v(du/dx).\n\n8.- y=u/v; u=f(x), v=g(x) => dy/dx = (v(du/dx) - (dv/dx)u)/v^2.\n\n");
	printf ("9.- y=|u|; u=f(x) => dy/dx = (u/|u|)(du/dx).\n\n10.- y=ln u; u=f(x) => dy/dx = (du/dx)/u.");
	printf ("\n\nPara salir ingrese cualquier numero o letra abajo:\n");
	scanf ("%s",&q);
	printf ("\n\n\n\n");
}

int fintegrar (int t){
	char q[50];
	printf ("\n\nBienvenido a la lista de formulas de integracion basica, a continuacion se enumerara una reducida lista\ncon distintas formulas basicas de ");
	printf ("integracion agrupadas para su conocimento basandome en el formulario de la copadi (considerando \"|\" como el simbolo de la integral):\n\n");
	printf ("1.- | k(f(u))du => k | ( f(u) )du.\n\n2.- | [f(u)+-g(u)]du => | [f(u)]du +- | [g(u)]du.\n\n");
	printf ("3.- | du => u + C.\n\n4.- | (u^n)du => [(u^n+1) / (n+1)] + C.\n\n");
	printf ("5.- | (du/u) => ln u + C.\n\n6.- | (e^u)du => (e^u) + c.\n\n");
	printf ("7.- | (a^u)du => [(a^u)/ln a] + c.\n\n8.- | (sen u)du => (-cos u) + C.\n\n");
	printf ("9.- | (cos u)du => (sen u) + C.\n\n10.- | (tan u)du => -ln(cos u) + C = ln(sec u) + C.");
	printf ("\n\nPara salir ingrese cualquier numero o letra abajo:\n");
	scanf ("%s",&q);
	printf ("\n\n\n\n");
}

int logaritmo (int t){
	int a=1;
	double lg,ln,x;
	printf ("\n\nBienvenido a la opcion de logaritmos naturales y en base 10\n");
	do{
	printf ("\nSeleccione cual opcion es la que quiere usar:\n1) Logaritmo natural:\n2) Logaritmo en base 10:\n\nPara salir presione cualquier otro numero\n");
	scanf ("%d",&t);
	switch (t){
		case 1:
			printf ("\nIngrese el numero a sacar su logaritmo natural\n");
			scanf ("%lf",&x);
			ln=log(x);
			printf("\nEl logaritmo natural de %f es: %f\n",x,ln);
			break;
		case 2: 
		    printf ("\nIngrese el numero a sacar su logaritmo en base 10:\n");
		    scanf ("%lf",&x);
		    lg=log10(x);
		    printf("\nEl logaritmo en base 10 de %f es: %f\n",x,lg);
		    break;
		default:
			a=0;
			printf("\nUn gusto haberle ayudado\n\n\n\n");
	}
	} while (a!=0);
}

int calcunom (int t){
	int a=1,x,y;
	do{
	printf ("\nSeleccione cual opcion es la que quiere usar:\n1) Suma:\n2) Resta:\n3) Multiplicacion:\n4) Division:\n5) Cociente:\n\nPara salir presione cualquier otro numero\n");
	scanf ("%d",&t);
	switch (t){
		case 1:
			printf ("\nIngrese el primer numero de la suma\n");
			scanf ("%d",&x);
			printf ("\nIngrese el segundo numero de la suma\n");
			scanf ("%d",&y);
			x=x+y;
			printf("\nEl resultado de la suma es: %d\n",x);
			break;
		case 2: 
		    printf ("\nIngrese el primer numero de la resta\n");
			scanf ("%d",&x);
			printf ("\nIngrese el segundo numero de la resta\n");
			scanf ("%d",&y);
			x=x-y;
			printf("\nEl resultado de la resta es: %d\n",x);
			break;
		case 3:
			printf ("\nIngrese el primer numero de la multiplicacion\n");
			scanf ("%d",&x);
			printf ("\nIngrese el segundo numero de la multiplicacion\n");
			scanf ("%d",&y);
			x=x*y;
			printf("\nEl resultado de la multiplicacion es: %d\n",x);
			break;
		case 4:
			printf ("\nIngrese el primer numero de la division\n");
			scanf ("%d",&x);
			printf ("\nIngrese el segundo numero de la division\n");
			scanf ("%d",&y);
			x=x/y;
			printf("\nEl resultado de la division es: %d\n",x);
			break;
		case 5:
			printf ("\nIngrese el primer numero del calculo del cociente\n");
			scanf ("%d",&x);
			printf ("\nIngrese el segundo numero del calculo del cociente\n");
			scanf ("%d",&y);
			x=x-y;
			printf("\nEl cociente es: %d\n",x);
			break;
		default:
			a=0;
			printf("\nUn gusto haberle ayudado\n\n\n\n");
			break;
		}
	}while(a!=0);
}

