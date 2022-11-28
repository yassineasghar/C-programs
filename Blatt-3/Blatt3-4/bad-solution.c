#include <stdio.h>
#include <stdlib.h>
#define m 10000

// Potenz Rechner :
double potenz( double a , int b) {
 if (b == 0) return 1 ;
 else return potenz(a , b-1)*a ;
 }

// Logarithmus (ln) Rechner :
double logarithmus(double x){

int i , j ;
double EndErgebnis1 = 0.0 ; 
double EndErgebnis2 = 0.0 ;
double Ergebnis1 = 0.0 ;
double Ergebnis2 = 0.0 ;
double SummeErgebnis = 0.0 ;
double Glieder = (x - 1) ;

if(x == 0) return 0;

// Für alle Zahlen : 
for (i = 1 ; i < m ; i++){
	Ergebnis1 =  potenz(Glieder,i)/i ;
	EndErgebnis1 += Ergebnis1 ;
}

// Für Gerade Zahlen : 

for (j = 2 ; j < m ; j+=2){
        Ergebnis2 =  potenz(Glieder,j)/j ;
        EndErgebnis2 += Ergebnis2 ;
}
SummeErgebnis = EndErgebnis1 - 2*EndErgebnis2 ; 

return SummeErgebnis ;

}
// Main :
int main(void){
double x ;

printf("Eine Zahl X eingeben :\t ");
scanf("%lf",&x);

// Loop wenn x < 0 oder x > 2 : 
if(x < 0 || x >2){
printf("Achtung : x muss positive und x <= 2\n");
printf("Nochmal versuchen :\t");
scanf("%lf",&x);
}
else{
printf(">\tln(%.2lf) = %.3lf \n", x ,logarithmus(x));
}
return 0;
}
