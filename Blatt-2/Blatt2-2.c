#include <stdlib.h>
#include <stdio.h>



int main(void){
    
    float Abnahme ;
    float LP1 , LP2 , LP3 ; // LP --> Listenpreis
    float RR1 , RR2 , RR3 ; // RR --> Rabatt auf Rechnungsbetrag
    float Angebot1 , Angebot2 , Angebot3 ;
    
    
    
    printf("Bitte gib die Abnahmemenge ein :\t");
        scanf("%f", &Abnahme);
    
    
    
    // Preis 1 :
    LP1 = (Abnahme/50)*25.5 ;
    RR1 = LP1 - LP1*0.03 ;
    
    if(5000 <= Abnahme){
        Angebot1 = RR1 - RR1*0.00 ;
        printf("Preis 1 = %.2f €\n", Angebot1);
        
    }
    
    else{
        Angebot1 = LP1 ;
        printf("Preis 1 = %.2f €\n",Angebot1);
    }
    
    // Preis 2 :
    LP2 = (Abnahme/50)*26.8 ;
    RR2 = LP2 - LP2*0.05 ;
    
    if(15000 <= Abnahme){
        Angebot2 = RR2 - RR2*0.03;
        printf("Preis 2 = %.2f €\n", Angebot2);
    }
    
    else{
        Angebot2 = LP2 - LP2*0.03 ;
        printf("Preis 2 = %.2f €\n",Angebot2);
    }
    
    // Preis 3 :
    LP3 = (Abnahme/50)*26.45 ;
    RR3 = LP3 - LP3*0.035 ;
    
    if(3000 <= Abnahme){
        Angebot3 = RR3 - RR3*0.02;
        printf("Preis 3 = %.2f €\n", Angebot3);
    }
    
    else{
        Angebot3 = LP3 - LP3*0.02 ;
        printf("Preis 3 = %.2f €\n",Angebot3);
    }
    
    
    return 0 ;
}
