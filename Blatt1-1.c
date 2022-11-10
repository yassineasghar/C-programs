/* Datei aufg1-1.c */
/* Berechnung der Summe zweier Zahlen */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  unsigned int summe, a=5, b=7;
    printf("Bitte gib a ein Wert : ");
    scanf("%d",&a);
    printf("Bitte gib a ein Wert : ");
    scanf("%d",&b);
  /* Berechnung */
  summe=a+b;

  /* Ausgabe des Ergebnisses */
    printf("Die Summe von %d + %d = %d\n",a,b,summe);

}
