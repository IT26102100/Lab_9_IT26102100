#include <stdio.h>
#include <string.h>

int main()
{
    char email[200] = "Hello,";
    char body[] = "Your order has been shipped.";
    char closing[] = "Regards, XYZ Company";

    strcat(email, " ");

    strncat(email, body, sizeof(email) - strlen(email) - 1);

    strcat(email, " ");

    strncat(email, closing, sizeof(email) - strlen(email) - 1);

    printf("Email: %s\n", email);

    return 0;
}
