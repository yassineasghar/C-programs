#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Summe :
double Summe(double a , double b){
    double Ergebnis ;
    Ergebnis = a + b ;
    return printf("Ergebnis :\t %.2lf\n", Ergebnis);
}

// Differenz :
double Differenz(double a , double b){
    double Ergebnis ;
    Ergebnis = a - b ;
    return printf("Ergebnis :\t %.2lf\n", Ergebnis);
}

// Produkt :
double Produkt(double a , double b){
    double Ergebnis ;
    Ergebnis = a * b ;
    return printf("Ergebnis :\t %.2lf\n", Ergebnis);;
}

// Quotient :
double Quotient(double a , double b){
    double Ergebnis ;
    if(b == 0){
        return printf("Ergebnis = Infinitie\n") ;
        }
    else{
        Ergebnis = a / b ;
        return printf("Ergebnis :\t %.2lf\n", Ergebnis);
        }
}

// Main :
int main(void){
    double Zahl1 , Zahl2 ;
    char Operator;
    char UserTaste[0];
    char *Taste = "=";
    
    printf("Eine erste Zahl eingeben:\t");
    scanf("%lf", &Zahl1);
    
    printf("Eine zweite Zahl eingeben:\t");
    scanf("%lf", &Zahl2);
    
    printf("Ein Operator auswählen:\t");
    scanf(" %c", &Operator);
    
    printf("Druck die '=' Taste:\t");
    scanf(" %c", &UserTaste[0]);
    
    if(UserTaste[0] == Taste[0]) {
        switch(Operator){
                case '+' : Summe(Zahl1,Zahl2);
                    break;
                case '-' : Differenz(Zahl1,Zahl2);
                    break;
                case '*' : Produkt(Zahl1,Zahl2);
                    break;
                case '/' : Quotient(Zahl1,Zahl2);
                    break;
                default:
                    printf("Operator '%c' war nicht korrekt \n", Operator);
            }
    }else{
        printf("Bitte '=' Taste Drucken !!\n");
    
    }
    return 0 ;
}
