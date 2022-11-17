#include <stdlib.h>
#include <stdio.h>



int main(void){
    
    float Weight ;
    float Angebot1 , Angebot2 , Angebot3 ;
    
    printf("Bitte gib die Abnahmemenge ein :\t");
        scanf("%f", &Weight);
    while (Weight <0) {
        printf("Inkorrekte Eingabe , Bitte nochmal versuchen :\t");
        scanf("%f",&Weight);
    }
    
    // Preis 1 :
    if(5000 <= Weight){
        Angebot1 = ((Weight/50)*25.5) - ((Weight/50)*25.5*0.03) ;
        printf("Preis 1 = %.2f\n", Angebot1);
        
    }else{
        Angebot1 = (Weight/50)*25.5 ;
        printf("Preis 1 = %.2f\n",Angebot1);
    }
    // Preis 2 :
    if(15000 <= Weight){
        Angebot2 = ((Weight/50)*26.8) - ((Weight/50)*26.8*0.05) - ((Weight/50)*26.8*0.03);
        printf("Preis 2 = %.2f\n", Angebot2);
    }else{
        Angebot2 = ((Weight/50)*26.8) - ((Weight/50)*26.8*0.03) ;
        printf("Preis 2 = %.2f\n",Angebot2);
    }
    // Preis 3 :
    if(3000 <= Weight){
        Angebot3 = ((Weight/50)*26.45) - ((Weight/50)*26.45*0.035) - ((Weight/50)*26.45*0.02);
        //- ((Weight/50)*26.45*0.02);
        printf("Preis 3 = %.2f\n", Angebot3);
    }else{
        Angebot3 = ((Weight/50)*26.45) - ((Weight/50)*26.45*0.02) ;
        printf("Preis 3 = %.2f\n",Angebot3);
    }
    
    
    return 0 ;
}
