//Program For Converting Temprature From Celsius to Fhrenheit 
#include <stdio.h>
#include <conio.h>
void main()
{
    float C, F;
    printf("Enter Temprature in degree celcius =");
    scanf("%f", & C);
    F = 1.8*C + 32;
    printf("\ntemprature in degree farenhite =%f", F);
    getch();
}
