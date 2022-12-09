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

// Main :

int main(void) {
    int Zahl = 0 ;

    while (Zahl <= 99) {
        if(Quersumme(Zahl) == 7 && Zahl % 7 == 0) {
            printf("**\t");
        }else{
            printf("%02d\t", Zahl);
        }
        Zahl++;
        if (Zahl%10 == 0)printf(" \n");
    }
    return 0;
}
