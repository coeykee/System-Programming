#include "mac_def.c"
#include <stdio.h> 
int main() 
{ 
    // The macro is expended as 2 + 3 * 3 + 5, not as 5*8 
    printf("%d\n", MULTIPLY(2+3, 3+5)); 
    return 0; 
} 
// Output: 16

