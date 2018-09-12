#include<stdio.h>
#include "mac_def.c"
int main()
{
int x;
int y;

x = SQU(3);  // Argumented Macro
y = CUBE(3); // Nested Macro

printf("\nSquare of 3 : %d",x);
printf("\nCube of 3 : %d",y);

return(0);
}
