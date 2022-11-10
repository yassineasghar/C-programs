#include <stdio.h>
#include <math.h>


int main(void){
    float v0 , a , x , Vend;
    
    //Header :
  
    printf("\n");
    printf("==============================================\n");
    printf("=       Bitte auf die Einheiten achten       =\n");
    printf("==============================================\n");
    printf("=     Anfangsgeschwindigkeit in [km.h⁻¹]     =\n");
    printf("==============================================\n");
    printf("=          Beschleunigung [m.s⁻¹]            =\n");
    printf("==============================================\n");
    printf("=                 Strecke [m]                =\n");
    printf("==============================================\n");
    printf("\n");
    
    //Eingabe :
  
    printf("> Bitte gib die Anfangsgeschwindigkeit ein:\t");
    scanf("%f",&v0);
    printf("\n");
    
    printf("> Bitte gib die Beschleunigung ein:\t");
    scanf("%f",&a);
    printf("\n");
    
    printf("> Bitte gib die Strecke ein:\t");
    scanf("%f",&x);
    printf("\n");
    
    // Formeln :
    
    Vend = 3.6*(sqrt((v0/3.6)*(v0/3.6) + 2*a*x));
    
    // Ausgabe :
  
    printf("> Die Endgeschwindigkeit:\tVend = %.2f km.h⁻¹\n\n",Vend);

    return 0 ;
}
