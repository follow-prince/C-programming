// If the mark obtained by a student in five different subject are input through the
// aggregate marks percentage marks obtain by the student that the maximum marks the can 
// be obtain by student in each subject is 100 marks.

#include<stdio.h>

int main(){
    int tamil,english,maths,science,social_science,total;
    float average;
    printf("\nEnter the Tamil Mark : ");
    scanf("%d",&tamil);
    printf("\nEnter the English Mark : ");
    scanf("%d",&english);
    printf("\nEnter the Maths Mark : ");
    scanf("%d",&maths);
    printf("\nEnter the Science Mark : ");
    scanf("%d",&science);
    printf("\nEnter the Social Science Mark :");
    scanf("%d",&social_science);
    total=tamil+english+maths+science+social_science;
    average=total/5.0;
    printf("\n\n Total Mark : %d",total);
    printf("\n\nAverage Mark : %0.2f \n\n",average);


    return 0;
}