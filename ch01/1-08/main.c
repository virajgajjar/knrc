/* Exercise 1-8 */

#include <stdio.h>

main()
{
    long blanks, tabs, lines;
    int c;

    blanks = 0;
    tabs = 0;
    lines = 0;

    printf("Enter input:\n");
    while ((c=getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
        if (c == '\n')
            ++lines;
    }
    printf("\nblanks: %ld\ntabs:   %ld\nlines:  %ld\n", blanks, tabs, lines);
}
