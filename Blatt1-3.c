#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
    double x , func1 , func2 , func3 , func4 ;

    printf("Gib x einen Wert ein:\t");
    if (scanf("%lf",&x) != 1) {
        printf("X was a CHARACTER !!!\n");
    } else {
        func1 = sqrt(1 + pow(x,2)) ;
        func2 = (1+x)/(1-x);
        func3 = sin(x);
        func4 = exp(-x);
        printf("1). √(1+x²) = %.2lf \n",  func1);
        printf("2). (1+x)/(1-x) = %.2lf \n", func2);
        printf("3). sin(x) = %.2lf \n", func3);
        printf("4). exp(-x) = %e \n", func4);
    }
    
    
    return 0 ;
}




    

    




