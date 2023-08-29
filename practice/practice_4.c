/*!SECTION
The length and breadth of a  rectangle  and  radius of a circle are input thought 
the keyboard. white a program to calculate the area and perimeter of a rectangle and  area and  
criurfere of a circle.

Formula:
    rectangle :-
        Area = 1 * b
        perimeter = 2 *(l+b)
    
    circle:-
        Area : 3.14 * radius * radius
        perimeter : 2 * 3.14 * radius
*/
//  Program:
#include <stdio.h>

int main(){
    float l, b, r;
    printf("Enter the length and breadth of a rectangle and radius of a circle: ");
    scanf("%f %f %f", &l, &b, &r);
    float area = 1 * b;
    float perimeter = 2 * (l + b);
    float area_circle = 3.14 * r * r;
    float perimeter_circle = 2 * 3.14 * r;
    printf("\nThe area of a rectangle is %f", area);
    printf("\nThe perimeter of a rectangle is %f", perimeter);
    printf("\nThe area of a circle is %f", area_circle);
    printf("\nThe perimeter of a circle is %f", perimeter_circle);
    return 0;
}