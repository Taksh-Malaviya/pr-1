#include<stdio.h>
#include<conio.h>
main()
{
int basic,hra,da,ta,ans;
clrscr();
printf("enter value basic: = ");
scanf("%d",&basic);
hra=basic*10/100;
da=basic*5/100;
ta=basic*8/100;
ans=basic+hra+da+ta;
printf("%d",ans);
getch();
}
