//Sequential search or Linear Search profgram
#include<stdio.h>
#include<conio.h>
void main()
{
int x[]={23,45,67,88,11},loc,i,num,flag=0;
clrscr();
for(i=0;i<sizeof(x)/sizeof(int);i++){
printf("\nx[%d]=%d",i,x[i]);}
printf("\nenter the Number to Search:");
scanf("%d",&num);
for(i=0;i<sizeof(x)/sizeof(int);i++)
{
if(num==x[i]){loc=i;flag=1;break;}
}
if(flag==1){printf("\nNumber found at %d location",loc);}
else{printf("\nNumber not found!");}

getch();
}
