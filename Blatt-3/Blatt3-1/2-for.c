#include <stdio.h>

int main(void) {

    double Basis, Ergebnis = 1;
    int Exponent, i;
    
    printf("Ein Basis eingeben:\t");
    scanf("%lf", &Basis);

    printf("Ein Exponent eingeben:\t");
    scanf("%d", &Exponent);
    
    while (Exponent < 0) {
            printf("Negative Exponenten sind unwillkommen:\t");
            scanf("%d", &Exponent);
        }
    
    for (i=1 ; i <= Exponent; i++) {
        Ergebnis *= Basis;
    }
    printf("Ergebnis :\t%.2lf\n", Ergebnis);

    return 0;
}
