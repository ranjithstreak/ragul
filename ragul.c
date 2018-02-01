
#include <stdio.h>
void main()
{
    char c;
    printf("Enter the alphabet\n ");
    scanf("%c",&c);
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    printf("It is a alphabet");
    else
    printf("It is not a alphabet");
}
