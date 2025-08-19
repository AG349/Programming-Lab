#include <stdio.h>
int main(){
    float P, R, T;
    printf ("Enter the Priciple Amount:");
    scanf ("%f",&P);
    printf ("Enter the Interest rate:");
    scanf ("%f",&R);
    printf ("Enter the Time:");
    scanf ("%f",&T);
    printf ("The Simple Interest is: %f",(P*R*T)/100);
    return 0;

}