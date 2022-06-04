/* Exercise 1-9 */

#include <stdio.h>

main()
{
    int c, previous_char;

    previous_char = 'x';
    printf("Enter input:\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (previous_char != ' ') {
                putchar(c);
            }
        }
        if (c != ' ') {
            putchar(c);
        }
        previous_char = c;
    }
}
