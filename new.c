#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,n,fact=1;

	printf("enter value \n");
	scanf("%d",n); 
	for(i=1;i<=n;i++)
	{
      fact=fact*i;
	}
printf("the value of factorial is %d",fact);
}
getch();