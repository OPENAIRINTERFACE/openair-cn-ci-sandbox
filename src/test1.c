/*
 * Copyright OAI Software Alliance
 * Author Raphael Defosseux
 * Comments : Proper comments
 * i do care : bbbb
 */
#include <stdio.h>

/* dummy comment */
#define _RELEASE

int main()
{
// Intentional warning for CPPCHECK
    unsigned int testId = 1;
    printf ("Test%d\n", testId);
// Debug Variant
#ifdef _DEBUG
// Intentional error for CPPCHECK
    char a[10];
    a[10] = 0;
#endif
// Release variant
#ifdef _RELEASE
    int idx;
    int sum = 0;
    for (idx = 0; idx < 10; idx++) {
        sum += idx;
    }

    printf ("Sum = %d\n", sum);
#endif
    return 0;
}
