/* Exercise 1-6 */

#include <stdio.h>

main()
{
    int c;

    printf("Enter a character: ");
    c = (getchar() != EOF);
    printf("\ngetchar() != EOF? : %d\n", c);
}
