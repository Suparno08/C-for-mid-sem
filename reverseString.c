#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i = 0, j;

    printf("Enter a string:\n ");
    gets(str); // Reads the input string (including spaces)

    j = strlen(str) - 1; // Last index of the string

    while (i < j)
    {

        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
