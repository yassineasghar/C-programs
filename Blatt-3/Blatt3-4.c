#include <stdio.h>

double ln(double x){
  
    double OldSum = 0.0;
    double Term1 = (x - 1) / (x + 1);
    double Term2 = Term1 * Term1;
    double Denom = 1.0;
    double Frac = Term1;
    double Term = Frac;
    double Sum = Term;

    while ( Sum != OldSum ){
        OldSum = Sum;
        Denom += 2.0;
        Frac *= Term2;
        Sum += Frac / Denom;
    }
    return 2.0 * Sum;
}


int main(void){
    
    // Vars :
    double Eingabe;

    // Eingabe einlesen :
    printf("Eine positive Zahl x eingeben:\t");
    scanf("%lf", &Eingabe);
    
    // Bedingungen :
    while (Eingabe <= 0 || Eingabe > 2){
        printf("Beachte folgende Bedingungen:\n ");
        printf("\t\t\t0 < x und x <= 2 \n");
        printf("> Nochmal Versuchen :\t");
        scanf("%lf", &Eingabe);
    }
    // Ausgabe :
    printf("> ln(%.2lf) = %.5lf\n", Eingabe, ln(Eingabe));
  
    return 0;
}
