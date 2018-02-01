#include <stdio.h>
void main()
{
    int a,c=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    while(a!=0)
    {
    a /=10;
    ++c;
    }
    printf("The number of digits are %d",c);
}

