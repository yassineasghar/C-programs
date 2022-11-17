#include <stdlib.h>
#include <stdio.h>



int main(void){
    
    float Einkommen ,Steuer ,y ,z ;
    
    
    printf("Gib das Einkommen ein : \t");
        scanf("%f",&Einkommen);
  
    y = (Einkommen - 7664)/10000 ;
    z = (Einkommen - 12739)/10000 ;
    
    if(Einkommen < 7664){
        printf("Steuer = 0 €\n");
    }
    
    else if (Einkommen >= 7665 && Einkommen <= 12739){
        Steuer = (883.74*y + 1500)*y ;
        printf("Steuer = %.2f €\n", Steuer);
    }
    
    else if (Einkommen >= 12740 && Einkommen <= 52151){
        Steuer = (228.74*z + 2397)*z + 989 ;
        printf("Steuer = %.2f €\n", Steuer);
    }
    
    else if (Einkommen >= 52152 && Einkommen <= 250000){
        Steuer = 0.42*Einkommen - 7914;
        printf("Steuer = %.2f €\n", Steuer);
    }else{
        Steuer = 0.45*Einkommen - 15414;
        printf("Steuer = %.2f €\n", Steuer);
    }
        
        
    return 0;
}
