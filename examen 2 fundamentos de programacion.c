#include <stdio.h>



void main () {

   int pre1, pre2, pre3;

   printf ("Buenos dias, en este programa queremos pedirle el valor de la primer pelicula a comparar\n");

   scanf ("%d",&pre1);

   printf ("Ahora queremos pedirle el valor de la segunda pelicula a comparar\n");

   scanf ("%d",&pre2);

   printf ("ahora queremos pedirle el valor de la ultima pelicula a comparar\n");

   scanf ("%d",&pre3);

   if (pre1 < pre2){

      if (pre1 < pre3) {

         printf ("El precio de las peliculas es: %d",pre1);

         }

      else {

         printf ("El precio de las peliculas es: %d",pre3);

         }

   }
   else {
      if (pre2 < pre3) {

         printf ("El precio de las peliculas es: %d",pre2);

         }

      else {

         printf ("El precio de las peliculas es: %d",pre3);

         }

   }
}        