/* Exercise 1-10 */

#include <stdio.h>

main()
{
    int c, skip;

    printf("Enter input:\n");
    while ((c = getchar()) != EOF) {
        skip = 0;
        if (c == '\t') {
            printf("\\t");
            skip = 1;
        }
        if (c == '\b') {
            printf("\\b");
            skip = 1;
        }
        if (c == '\\') {
            printf("\\\\");
            skip = 1;
        }
        if (skip == 0)
            putchar(c);
    }
}
