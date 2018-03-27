#include <stdio.h>
int main()
{
    char s1[1000], i;

    printf("Enter a string: ");
    scanf("%s", s1);

    for(i = 0; s1[i] != '\0'; ++i);

    printf("Length of string: %d", i);
    return 0;
}
