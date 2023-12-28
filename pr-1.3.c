/*Q.3 Write C Program to find the third angle of triangle if two other angles are given.
For example,
Input:
First angle: 65
Second angle: 45 

Output: 
Third angle: 70*/
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


