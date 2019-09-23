#include <stdlib.h>
#include <stdio.h>

long long X1, X2, X3, X4, X5, X6;  /* These are the only variables */
static long long Xzero = 0;  /* This is always zero */

void main() 
{

/* Start of code to convert to BarelyC */
X1 = 0;
X2 = 1;

Loop: if (X2 >= 10) goto Skip;
    if (X2 <= 3) goto Else;
	X1 = X1 + X2;
    goto End;
    Else: X1 = X1 + 3;
          goto End;
    End: X2 = X2 + 1;
    goto Loop;
Skip:

/* End of the code to conver to BarelyC */

printf("X1 = %d\n",X1);
}




