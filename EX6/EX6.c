#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    char dob[15];

    char secureName[20];
    char secureDOB[15];

    while (1)
    {
        printf("Enter patient name: ");
        fgets(name, sizeof(name), stdin);

        name[strcspn(name, "\n")] = '\0';

        printf("Enter date of birth: ");
        fgets(dob, sizeof(dob), stdin);

        dob[strcspn(dob, "\n")] = '\0';

        if (strlen(name) >= sizeof(secureName) ||
            strlen(dob) >= sizeof(secureDOB))
        {
            printf("Error: Input exceeds buffer size.\n");
            continue;
        }

        strncpy(secureName, name, sizeof(secureName) - 1);
        secureName[sizeof(secureName) - 1] = '\0';

        strncpy(secureDOB, dob, sizeof(secureDOB) - 1);
        secureDOB[sizeof(secureDOB) - 1] = '\0';

        printf("Data saved successfully.\n");

        break;
    }

    return 0;
}
