#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char first[10], last[10];
    int i;

    printf("Enter customer name: ");
    scanf("%9s", first);

    if (scanf("%9s", last) != 1)
    {
        strcpy(last, "N/A");
    }

    first[0] = toupper(first[0]);

    for (i = 1; first[i] != '\0'; i++)
    {
        first[i] = tolower(first[i]);
    }

    if (strcmp(last, "N/A") != 0)
    {
        last[0] = toupper(last[0]);

        for (i = 1; last[i] != '\0'; i++)
        {
            last[i] = tolower(last[i]);
        }
    }

    printf("Customer Name: %s %s\n", first, last);

    return 0;
}


