#include <stdio.h>

int main ()
{
     int a,b,c,d;
     a=9;
     b=2;
     c=5;
     d=3;
     if (!(a>b|b<=c)){
                       printf("\n!(a>b||b<=c) = true \n");
                       } 
                       else{
                            printf ("\nUna operacion logica no se cumplio\n");}            
     if ((c>d)|(c==a)){
                        printf("\n(c>d)||(c==a) = true\n");
                        }
                        else{
                             printf ("\nUna operacion logica no se cumplio\n");}
     if ((b==c-d)|(a+b>=c*d)){
                               printf("\n(b==c-d)||(a+b>=c*d) = true\n");}
                               else{
                                    printf ("\nUna operacion logica no se cumplio\n");}
     if ((c>5)&((c>b)|(a<=d))){
                                 printf("\n(c>5)&&((c>b)||(a<=d)) = true\n");
                                 }
                                 else{
                                      printf ("\nUna operacion logica no se cumplio\n");}
     return 0;
}                                    
     
