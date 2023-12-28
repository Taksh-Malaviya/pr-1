/*Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit.
Use formula for °C to °F is: ° F = ( °C × 9/5 ) + 32
For example,
Input:
The temperature in Celcius: 38

Output: 
The temperature in Fahrenheit: 100.4*/
#include<stdio.h>
#include<conio.h>
main()
{
    int fahrenheit,celcius;
    
    printf("enter any count :");
    scanf("%d",&celcius);
    
    fahrenheit = (celcius*9/5)+32;
    
    printf("ans = %d",fahrenheit);
}

