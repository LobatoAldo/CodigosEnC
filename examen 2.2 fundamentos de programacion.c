#include <stdio.h>
#include <math.h>

void main (){
	int t, p, n;
	double pot1, pot2, res1, res2;
	
	printf ("Buenos dias, en este programa queremos pedirle el valor de la primer pelicula a comparar\n");
	
	scanf ("%lf",&t);
	
	printf ("Ahora queremos pedirle el valor de la segunda pelicula a comparar\n");
	
	scanf ("%lf",&p);
	
	printf ("ahora queremos pedirle el valor de la ultima pelicula a comparar\n");
	
	scanf ("%lf",&n);
	
	res1 = t/p;
	
	res2 = pow(t,n);
	
	pot1 = pow(res1,n);
	
	pot2 = pow(p,n);
	
	res1 = res2/pot2;
	
	if (pot1 == res1){
		printf ("Se cumple la expresion");
	}
	else {
		printf ("No se cumple la expresion");
	}
}