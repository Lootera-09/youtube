#include<stdio.h>
#include<ctype.h>

int main ()
{
    char unit;
    float temperature;

    
    printf("\n Enter the unit of the temperature in (F) or (C)?:");
    scanf("%c",&unit);
    unit = toupper;


    if(unit=='C'){
        printf("\ntemperature is currently in C");
        printf("\n Enter the temperature : ");
        scanf("%f",&temperature);
        

    }
    else if(unit == 'F'){
        printf("\ntemperature is currently in F");

    }
    else{
        printf("\n%c is not a valid unit ",unit);

    }

    return 0;

}