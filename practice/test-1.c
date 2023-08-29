//The distance between two cities (in km) is input through the keyboard . 
// write a program to connect and print this distance in meters feet, inches and centimeter 


#include<stdio.h>
int main()
{
        float km, m, cm, ft,i;
        printf("Enter The kilometer :" );
        scanf("%f", &km);
        m=km*1000;
        cm=m*100;
        i=cm/2.54;
        ft=i/12;
        printf("\n Km : %0.2f",km);
        printf("\n M : %0.2f",m);
        printf("\n cm : %0.2f",cm);
        printf("\n i : %0.2f",i);
        printf("\n ft : %0.2f",ft);
    return 0;
}
