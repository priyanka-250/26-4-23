#include<stdio.h>
#include<conio.h>
main()
{
int x=20,y=15,z=5,xyz;
xyz=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
clrscr();
printf("(x+y+z)2=%d",xyz);
getch();
}