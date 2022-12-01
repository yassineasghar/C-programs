#include <stdio.h>

// QuerSumme berechnen :

int Quersumme(int a){
    int qs = 0 ;
    while(a > 0){
        qs += a % 10 ;
        a /= 10 ;
    }
    return  qs;
}

// Mit ** Einsetzen :

int Replace(int b){
    if (Quersumme(b) == 7 && Quersumme(b) % 7 == 0){
        return printf("**") ;
    }
    else return Quersumme(b);
}

// Main : 

int main(void) {
    int Zahl = 0 ;
    
    while (Zahl <= 99) {
        printf("%02d  ", Quersumme(Zahl));
        Zahl++;
        if (Zahl%10 == 0)printf(" \n");
    }
    return 0;
}
