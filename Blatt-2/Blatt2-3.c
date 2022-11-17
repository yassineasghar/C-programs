#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>


int main(void) {
    
    // Vars :
    float a ,b ,c , D , X ,  X1 , X2 ;
    
    
    // Header :
    printf("====================\n");
    printf("= ax² + bx + c = 0 =\n");
    printf("====================\n");
    
    // Einlesen :
    printf("Bitte gib den  Koeffizient a ein:\t");
    scanf("%f", &a);
    printf("Bitte gib den  Koeffizient b ein:\t");
    scanf("%f", &b);
    printf("Bitte gib den  Koeffizient c ein:\t");
    scanf("%f", &c);

    
    D = b*b - 4*a*c ;
    
    if(D == 0){
        X = (-b)/(2*a);
        printf("> Die quadratische Gleichung hat 1 reelle Lösung:\t X = %.2f \n", X);
    }
    
    else if(D > 0){
        X1 = ((-b)- sqrt(D))/(2*a);
        X2 = ((-b)+ sqrt(D))/(2*a);
        printf("> Die quadratische Gleichung hat 2 reelle Lösungen :\t X1 = %.2f und X2 = %.2f \n",X1 ,X2);
    }
    else{
        X1 = ((-b)+ I*sqrt(-D))/(2*a);
        X2 = ((-b)- I*sqrt(-D))/(2*a);
        printf("> Die quadratische Gleichung hat 2 komplexe Lösungen:\t X1 = %.2f und X2 = %.2f \n",X1 ,X2);
    }

    
    return 0;
}
