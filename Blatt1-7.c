// Correction of C-code provided on Exercise sheet n° 1 - exercise 7 :


/* Datei aufg1-7.c */
/* Umrechnung von Winkelmaß in Bogenmaß */
 #include <stdlib.h>
 #include <stdio.h>
 int main(void){
     double winkel, bogen;
     double faktor=2*3.141592654/360;
 printf("Geben Sie den Winkel im Winkelmass ein: ");
 scanf("%lf", &winkel);
   
 bogen = winkel*faktor;
   
 printf("\nEin Winkel von %.2lf Grad entspricht %.4lf rad\n\n",winkel,bogen);
     //system("Pause");
 }
 
// Using float instead of double : 
/*
#include <stdlib.h>
 #include <stdio.h>
 int main(void){
 float winkel, bogen;
     float faktor=2*3.141592654/360;
 printf("Geben Sie den Winkel im Winkelmass ein: ");
 scanf("%f", &winkel);
 bogen = winkel*faktor;
 printf("\nEin Winkel von %.2f Grad entspricht %.4f rad\n\n",winkel,bogen);
     //system("Pause");
 }
 
 */
