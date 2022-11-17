#include <stdio.h>
#include <stdlib.h>

int main(void){
    int Height ;
    
    
    printf("Gib die momentane Höhenposition:\t");
        scanf("%d",&Height);
    
    /*Höhe in Meter
     0 – <200        Klimazone maritimes
     200 – <1800     Klima Regenwald
     1800 – <2300    immergrüner Wald
     2300 – <3500    alpines Klima
     3500 – <4200    ewiges Eis
     */
    
    if(0 <= Height && Height < 200){
        printf("Klimazone maritimes\n");
    }
    else if (200 <= Height && Height< 1800){
        printf("Klima Regenwald\n");
    }
    else if (1800 <= Height && Height < 2300){
        printf("Immergrüner Wald\n");
    }
    else if (2300 <= Height && Height < 3500){
        printf("Alpines Klima\n");
    }
    else if(3500 <= Height && Height < 4200){
        printf("Ewiges Eis\n");
    }
    else{
        printf("Keine Klimazone für die Eingabe gefunden\n");
    }
    
        
    
    return 0;
}
