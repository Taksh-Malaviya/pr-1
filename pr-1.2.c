/*Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
For example,
Input:
Base Salary: 1000
HRA=10%
DA=5%
TA=8%

Output: 
Rs. 1230
*/
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
