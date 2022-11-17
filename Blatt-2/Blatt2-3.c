#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {

    // Vars :
    float a ,b ,c , p ,q , D, X ,X1 , X2 ,X11 , X12 ,X21 ,X22;

    // Einlese :
    printf("Bitte gib den  Koeffizient a ein:\t");
    scanf("%f", &a);
    printf("Bitte gib den  Koeffizient b ein:\t");
    scanf("%f", &b);
    printf("Bitte gib den  Koeffizient c ein:\t");
    scanf("%f", &c);

    p = b/a ;
    q = c/a ;

    D = ((p*p)/4)-q ;

    if(D == 0){
        X = (-p)/2;
        printf("> Die quadratische Gleichung hat 1 reelle Lösung:\t X = %.2f \n", X);
    }

    else if(D > 0){
        X1 = ((-p)/2)-sqrt(D);
        X2 = ((-p)/2)+sqrt(D);
        printf("> Die quadratische Gleichung hat 2 reelle Lösungen :\t X1 = %.2f und X2 = %.2f \n",X1 ,X2);
    }
    else{
        X11 = ((-p)/2) ;
        X21 = ((-p)/2) ;
        X12 = -sqrt(-D) ;
        X22 = sqrt(-D) ;

        printf("> Die quadratische Gleichung hat 2 komplexe Lösungen:\n ");
        printf("X1 = %.2f %.2fi und X2 = %.2f+%.2fi \n",X11 , X12 ,X21 ,X22);
    }


return 0 ;
}

