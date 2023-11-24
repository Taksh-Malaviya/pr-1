#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    float n1,n2,n3;
    printf("Enter the first side of Triangle: ");
    scanf("%f",&n1);
    printf("\nEnter the second side of Triangle: ");
    scanf("%f",&n2);
    n3=180-n1-n2;
    printf("\nThird Side of Triangle is: %f",n3);
    getch();
}


