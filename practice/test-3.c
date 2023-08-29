// Temperature of a city in Fahrenheit 
//to degrees in input through the keyboard converting this temperature into
//  centigrade  degrees

// formula  =  (Fahrenheit - 32)*  5 / 9 

#include<stdio.h>

int main(){
    float Fahrenheit, Celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    Celsius = (Fahrenheit - 32) * (5.0 / 9.0);
    printf("Temperature in Celsius: %.2f\n", Celsius);

    return 0;
}