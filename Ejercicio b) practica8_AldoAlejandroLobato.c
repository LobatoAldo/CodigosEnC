#include <stdio.h>

int main (){
	int a,b,d=1,c=0;
	printf("Ingrese el numero al que se le va a aplicar la potencia\n");
	scanf ("%d",&a);
	printf ("Ingrese la potencia a la que se va a elevar el numero\n");
	scanf ("%d",&b);
		while (c<b){
		d*=a;
		c++;
		}
		printf ("El resultado es: %d",d);
    
    return 0;
}