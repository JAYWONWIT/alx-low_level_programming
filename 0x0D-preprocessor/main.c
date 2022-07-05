#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
@@ -9,11 +9,9 @@
 */
int main(void)
{
    int i;
    int j;
    int s;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
