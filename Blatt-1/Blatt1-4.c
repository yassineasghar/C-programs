#include <stdio.h>
#include <math.h>

int main(void){
    // Variable :
    float Fallzeit , Vmax_ms , Vmax_kmh , h , g = 9.81 ;
        
    // Engabe der Höhe :
    printf("\n> Bitte gib die Höhe in metern ein:\t");
    scanf("%f",&h);
    printf("\n");
        
    // Rechnungsformeln :
    
     //Fallzeit :
       Fallzeit = sqrt((2*h)/g) ;
    
     //Endgeschwindigkeit Vmax in m.s⁻¹ :
       Vmax_ms = sqrt(2*g*h) ;
    
     //Endgeschwindigkeit Vmax in km.h⁻¹ :
       Vmax_kmh = Vmax_ms*3.6 ;
    
   // Ausgabe :
   printf("> Die Endegeschwindigkeit in m.s⁻¹ beträgt :\tVmax = %.3f m.s⁻¹ \n\n",Vmax_ms);
   printf("> Die Endegeschwindigkeit in km.h⁻¹ beträgt :\tVmax = %.3f km.h⁻¹\n\n",Vmax_kmh);
   printf("> Die Fallzeit  beträgt :\tFallzeit = %.3f s \n\n",Fallzeit);
    
return 0 ;   
}
