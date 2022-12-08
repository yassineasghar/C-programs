// Libs :
#include <stdio.h>
#include <stdlib.h>

// Main function :
int main(void) {
    
    // Pointers / Guests :
    char *Weeks = "Wochen";
    char *OneWeek = "Woche";
    char *Days = "Tage";
    char *OneDay = "Tag";
    char *WeekSyntax = "";
    char *DaySyntax = "";
    
    // Normal & Friendly Guys :
    long int Second = 0 ;
    int Minute = 0 ;
    int Hour = 0 ;
    int Day = 0 ;
    int Week = 0;
    
    // Slaves :
    int i;
    int j;
    int k;
    int l;

    
    // Read the input :
    printf("Bitte die Sekunden eingeben:\t");
    scanf("%ld", &Second);
    
    // input < 0 - loop :
    // Desclaimer : Do not test  CHARS !!!!
    while(Second < 0 ){
        printf("Negative Zahlen sind unwillkomen!\n");
        printf("Nochmal Versuchen:\t");
        scanf("%ld", &Second);
    }
    
    // Standard Outputs :
    if(Second == 0){
    printf("0 Woche | 0 Tag | 00:00:00\n");
    }
    else if (Second < 60 && Second > 0){
    printf("0 Woche | 0 Tag | 00:00:%ld\n", Second);
    }
    
    // Converting the Input as requested :
    else {
        
        // Converting the input to Minutes :
        for (i = 0; Second >= 60; i++){
            Second = Second - 60;
            Minute = Minute + 1;
            
            // Converting Minutes to Hours :
            for (j = 0; Minute >= 60; i++){
                Minute = Minute - 60;
                Hour = Hour + 1;
                
                // Converting Hours to Days :
                for (k = 0; Hour >= 24; i++){
                    Hour = Hour - 24;
                    Day = Day + 1;
                    
                    // Converting Days to Weeks :
                    for (l = 0; Day >= 7; i++){
                        Day = Day - 7;
                        Week = Week + 1;
                    }
                }
            }
        }
        
        // Week or Weeks :
        if(Week > 1){
            WeekSyntax = Weeks ;
        }
        else{
            WeekSyntax = OneWeek ;
        }
        
        // Day or Days :
        if(Day > 1){
            DaySyntax = Days ;
        }
        else{
            DaySyntax = OneDay ;
        }
        
        // Done :
        printf("%d %s | %d %s | %02d:%02d:%02ld  \n", Week , WeekSyntax , Day , DaySyntax , Hour , Minute , Second);

    }
  
    // TEST CASES :
    /*
    // TC 1 :
    // Input: 0 --> Output: 0 Wochen | 0 Tage | 00:00:00
    // TC 2 :
    // Input: 59 --> Output: 0 Wochen | 0 Tage | 00:00:59
    // TC 3 :
    // Input: 6574548 --> Output: 10 Wochen | 6 Tage | 02:15:48
    // TC 4 :
    // Input: 86400 --> Output: 0 Woche | 1 Tag | 00:00:00
    // TC 5 :
    // Input: 604800 --> Output: 1 Woche | 0 Tag | 00:00:00
    // TC 6 :
    // 1000000000 Seconds - Output : 1653 Wochen | 3 Tage | 01:46:40
    //
    // Use this guy to convert : Seconds -> Week,Day,Hour,...
    // https://www.unitjuggler.com/convert-time-from-s-to-week.html
    */
    return 0;
}

