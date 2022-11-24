// Optional Solution
// For more information about C-Recusion : https://www.programiz.com/c-programming/c-recursion

# include <stdio.h>

double potenz( double a , int b) {
    if (b == 0) return 1 ;
    else return potenz(a , b-1)*a ;
    }

int main(){
    double Basis ;
    int Exponent ;
    
        printf("Ein Basis eingeben:\t");
        scanf("%lf", &Basis);
        printf("Ein Exponent eingeben:\t");
        scanf("%d", &Exponent);
    
    while (Exponent < 0) {
        printf("Negative Exponenten sind unwillkommen:\t");
        scanf("%d", &Exponent);
                }
    
    printf ( "Ergebnis = %.2lf\n " , potenz(Basis ,Exponent)) ;
    return 0;
}
