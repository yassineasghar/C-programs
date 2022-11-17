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
    printf("\nP(x) =  (%.2f)x² + (%2.f)x + (%.2f)c \n\n",a ,b ,c);

    p = b/a ;
    q = c/a ;
    D = ((p*p)/4)-q ;

    if(D == 0){
        X = (-p)/2;
        printf("> P(x) = 0 hat 1 reelle Lösung:\t X = %.2f \n\n", X);
    }

    else if(D > 0){
        X1 = ((-p)/2)-sqrt(D);
        X2 = ((-p)/2)+sqrt(D);
        printf("> P(x) = 0 hat 2 reelle Lösungen :\t X1 = %.2f und X2 = %.2f \n\n",X1 ,X2);
    }
    
    else{
        X11 = ((-p)/2) ;
        X21 = ((-p)/2) ;
        X12 = -sqrt(-D) ;
        X22 = sqrt(-D) ;

        printf("> P(x) = 0 hat 2 komplexe Lösungen:\n ");
        printf("\nX1 = %.2f%.2fi \nX2 = %.2f+%.2fi \n\n",X11 , X12 ,X21 ,X22);
    }


return 0 ;
}
