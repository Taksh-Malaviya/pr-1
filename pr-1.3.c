#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    float side1,side2,side3;
    printf("Enter the first side of Triangle: ");
    scanf("%f",&side1);
    printf("\nEnter the second side of Triangle: ");
    scanf("%f",&side2);
    side3=180-side1-side2;
    printf("\nThird Side of Triangle is: %f",side3);
    getch();
}


