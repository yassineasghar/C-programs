#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(void){
    
    double V , r , h ;          // V = Volumen ; r = Radius ; h = Höhe
    
    printf("Achtung : der Radius r und die Höhe h müssen positive eingegeben\n");
    
    printf("Bitte der Radius r eingeben :\t");
        scanf("%lf",&r);            // hier wird der Radius Wert gespeichert
    printf("Bitte die Höhe h einegen :\t");
        scanf("%lf",&h);            // hier wird die Höhe Wert gespeichert
    
    V = M_PI*pow(r,2)*h ;       // M_PI from <Math> and M_PI = 3.141593
    
    printf("Das Volumen eines Zylinders ist  V = %lf \n",V);
    
    
    return 0 ;
}
