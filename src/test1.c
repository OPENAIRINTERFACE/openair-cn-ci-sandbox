/*
 * Copyright OAI Software Alliance 2019
 * Author Raphael Defosseux
 * Comments : Proper comments
 * i do care : ffff
 */
#include <stdio.h>

#define _RELEASE

int main()
{
// Intentional warning for CPPCHECK
    unsigned int testId = 1;
    printf ("Test%d for PR\n", testId);
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
