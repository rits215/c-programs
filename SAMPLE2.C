//bubble sort
#include<stdio.h>
#include<conio.h>
void main()
{
int x[]={-2,45,0,11,-9},i,j,temp;
clrscr();
for(i=0;i<sizeof(x)/sizeof(int);i++){
for(j=i+1;j<sizeof(x)/sizeof(int);j++){
if(x[i]>x[j]){
temp=x[i];
x[i]=x[j];
x[j]=temp;}
}
}
for(i=0;i<sizeof(x)/sizeof(int);i++)
printf("\n%d",x[i]);


getch();
}