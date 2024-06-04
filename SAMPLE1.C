#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
unsigned long int a=5896723;
int num1=0,num2=0,i=1,k,j=0,m=0;
clrscr();
printf("\nNumber:%ld",a);
while(a!=0){
k=a%10;
a=a/10;
if(i%2==0){k*=pow10(j);num1+=k;j++;}
else{k*=pow10(m);num2+=k;m++;}
i++;
}
printf("\nNumber1=%d\nNumber2=%d",num1,num2);
getch();
}