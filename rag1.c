#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter an integer:");
scanf("%d",&a);
for(b=2;b<a;b++)
 {
 if(a%b==0)
  {
  c=1;
  break;
  }
 }
if(c==0)
 {
 printf("%d is a prime number",a);
 }
else
 {
 printf("%d is not a prime number",a);
 }
return 0; 
}
