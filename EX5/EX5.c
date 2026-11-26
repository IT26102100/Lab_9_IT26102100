#include <stdio.h>
#include <string.h>

int main()
{
    char details[100];
    char name[50];
    char account[20];

    printf("Enter name and account number: ");

    fgets(details, sizeof(details), stdin);

    details[strcspn(details, "\n")] = '\0';

    char *ptr = strchr(details, ',');

    if (ptr != NULL)
    {
        *ptr = '\0';

        strcpy(name, details);

        strcpy(account, ptr + 1);

        printf("Name: %s\n", name);
        printf("Account Number: %s\n", account);
    }

    return 0;
}
