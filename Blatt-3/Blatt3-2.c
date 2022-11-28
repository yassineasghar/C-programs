#include <stdio.h>

int main(void) {
    // Vars :
    double Basis;
    double Exponent;
    double NeuExponent ;
    double ParErgebnis = 1.0 ;
    double Ergebnis = 1.00;
   
    // Einlesen :
    printf("Ein Basis eingeben:\t");
    scanf("%lf", &Basis);
    printf("Ein Exponent eingeben:\t");
    scanf("%lf", &Exponent);
    
    
    // Wenn Exponent negativs ist :
    if(Exponent < 0){
        ParErgebnis = Basis ;
        NeuExponent = Exponent*(-1);
        
        for(int i = 1 ; i < NeuExponent ; i++){
            ParErgebnis *= Basis;
            Ergebnis = 1/ParErgebnis ;
        }
        printf("Ergebnis :\t%.4lf\n", Ergebnis);
    }
    
    // Exponent positiv :
    else{
        Ergebnis = Basis ;
        
        for(int i = 1 ; i < Exponent ; i++){
            Ergebnis *= Basis ;
        }
        printf("Ergebnis :\t%.2lf\n", Ergebnis);
    }
        
    return 0;
}
