/*Write a c program to find maximum between two numbers using switch case
---------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
int flag=1;
printf("Enter the two numbers: ");
scanf("%d%d",&a,&b);
if(a<b)
{
flag=2;
}
switch(flag)
{
case 1:printf("%d is maximum",a);
       break;
case 2:printf("%d is maximum",b);
}
getch();
}
