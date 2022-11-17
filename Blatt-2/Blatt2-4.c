#include <stdlib.h>
#include <stdio.h>


int main(void){
    
    // Variable deklarieren :
    float Steuer, x ,y ,z ;
    
    // Einkommen (x) einlesen :
    printf("Gib das Einkommen ein : \t");
        scanf("%f",&x);
    
    y = (x - 7664)/10000 ;
    z = (x - 12739)/10000 ;
    
    // bis 7664 €
    if(x < 7664){
        printf("Steuer = 0 €\n");
    }
    
    // von 7665 bis 12739 €
    else if (x >= 7665 && x <= 12739){
        Steuer = (883.74*y + 1500)*y ;
        printf("Steuer = %.2f €\n", Steuer);
    }
    
    // von 12740 bis 52151 €
    else if (x >= 12740 && x <= 52151){
        Steuer = (228.74*z + 2397)*z + 989 ;
        printf("Steuer = %.2f €\n", Steuer);
    }
    
    //von 52152 bis 250000 €
    else if (x >= 52152 && x <= 250000){
        Steuer = 0.42*x - 7914;
        printf("Steuer = %.2f €\n", Steuer);
    }
    // ab 250001 €
    else{
        Steuer = 0.45*x - 15414;
        printf("Steuer = %.2f €\n", Steuer);
    }
        
        
    return 0;
}
