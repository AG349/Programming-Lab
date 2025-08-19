#include <stdio.h>
int main(){
    float C,F;
    
    printf ("Enter the Celsius:");
    scanf ("%f",&C);

    printf ("The conversion into Fahrenheit is: %f\n",((9*C/5)+32));

    
    printf ("Enter the Fahrenheit:");
    scanf ("%f",&F);

    printf ("The conversion into Celsius is: %f\n",(((F-32)*5)/9));

    return 0;

}