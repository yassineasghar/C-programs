#include <stdio.h>
#include <stdlib.h>

int main(void){

float Ergebnis;
float Eingabe ;

printf("Eine positive Zahl eingeben :\t");
        scanf("%f",&Eingabe);

while(Eingabe < 0 ){

printf("Falche Eingabe :\t");
        scanf("%f",&Eingabe);
}

return 0;
}
