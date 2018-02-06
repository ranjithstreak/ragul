#include<stdio.h>
void main()
{
    int i,a,b;
    printf("enter the numbers a,b\n");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b;i++)
    if(i%2==0)
    printf(" %d\n",i);
}
