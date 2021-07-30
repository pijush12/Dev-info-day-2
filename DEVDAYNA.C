/*Write a c program to print day of week name using switch case
---------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
printf("Enter the day no: ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\nSunday");
	break;
case 2: printf("\nMonday");
	break;
case 3: printf("\nTuseday");
	break;
case 4: printf("\nWednesday");
	break;
case 5: printf("\nThurseday");
	break;
case 6: printf("\nFriday");
	break;
case 7: printf("\nSaturday");
	break;
default: printf("\nWrong input");
}
getch();
}