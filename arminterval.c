#include<stdio.h>
#include<conio.h>
int main()
{
int i,num,temp,rem,sum,initial,final;
printf("Enter the range:");
scanf("%d",&initial);
scanf("%d",&final);
for(i=initial;i<=final;i++)
{
num=i;
temp=num;
while(num!=0)
{
rem=(num%10);
sum=sum+(rem*rem*rem);
num=num/10;
}
if(sum==temp)
{
printf("%d",sum);
}
return 0;
}
}
