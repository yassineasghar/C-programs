# include <stdio.h>

int main (void){
    
    double Basis ,Ergebnis = 1 ;
    int Exponent ;
    
    printf("Ein Basis eingeben:\t");
    scanf("%lf", &Basis);

    printf("Ein Exponent eingeben:\t");
    scanf("%lf", &Exponent);
    
    while (Exponent < 0) {
            printf("Negative Exponenten sind unwillkommen:\t");
            scanf("%lf", &Exponent);
            }
    
    while (Exponent --> 0){
            Ergebnis *= Basis ;
    }
    
    printf("Ergebnis :\t%.2lf\n", Ergebnis);
    
    return 0;
}
