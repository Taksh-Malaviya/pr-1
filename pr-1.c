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

