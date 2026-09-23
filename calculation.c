#include <stdio.h>
int main () 
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    printf ("Sum of the two numbers: %d\n", x+y);
    printf ("Difference of the two numbers: %d\n", x-y);
    printf ("Product of the two numbers: %d\n", x*y);
    printf ("Quotient of the two numbers: %d\n", x/y);
    
    return 0;
}