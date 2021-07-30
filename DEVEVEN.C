/*Write a c program to check whether a number even or odd
------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,flag=2;
printf("Enter the number: ");
scanf("%d",&a);
if(a%2==0)
{
flag=1;
}
switch(flag)
{
case 1: printf("\nThe number is even");
	break;
case 2:printf("\nThe number is odd");
}
getch();
}