/*Write a c program to check whether an alphabet is vowel or consonent using switch case
-----------------------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int flag=0;
printf("Enter the alphabet: ");
scanf("%c",&c);
if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u')
{
flag=1;
}
switch(flag)
{
case 1: printf("\nIt is a vowel");
	break;
case 0: printf("\nIt is a consonent");
	break;
}
getch();
}
