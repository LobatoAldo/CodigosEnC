#include <stdio.h>

int main (){
	int imp[5]={1,2,3,4,0},b=1,j;
	do{
		j=0;
		while(j<b){
			printf ("%d\t",imp[j]);
			j++;
		}
		printf ("\n\n");
		b++;
	}while (b<=4);
	b--;
	b--;
	do{
		j=0;
		while(j<b){
			printf ("%d\t",imp[j]);
			j++;
		}
		printf ("\n\n");
		b--;
	}while (b>=1);
	
	return 0;
}