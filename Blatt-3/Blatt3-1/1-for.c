#include <stdio.h>
#include <stdlib.h>

double potenz(double Basis  , int Exponent){
    double Ergebnis = Basis ;
    for(int i = 1 ; i < Exponent ; i++){
        Ergebnis = Ergebnis* Basis;
        }
    
    return Ergebnis;
}

int main(void) {
    double Basis;
    int Exponent;
  
    printf("Ein Basis eingeben:\t");
    scanf("%lf", &Basis);
    printf("Ein Exponent eingeben:\t");
    scanf("%d", &Exponent);
    
    while (Exponent < 0) {
        printf("Negative Exponenten sind unwillkommen:\t");
        scanf("%d", &Exponent);
    }
    printf("Ergebnis :\t%.2lf\n", potenz(Basis,Exponent));
    return 0;
}

