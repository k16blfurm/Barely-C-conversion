#include <stdlib.h>
#include <stdio.h>

long long X1, X2, X3, X4, X5, X6;  /* These are the only variables */
static long long Xzero = 0;  /* This is always zero */

void main() 
{

/* Start of code to convert to BarelyC */
X1 = 0;
for (X2 = 1; X2 < 10; X2++) {
    if (X2 > 3) {
	    X1 = X1 + X2;
    }
    else {
	    X1 = X1 + 3;
    }
}	

/* End of the code to conver to BarelyC */

printf("X1 = %d\n",X1);
}




