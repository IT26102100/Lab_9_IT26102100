#include <stdio.h>
#include <string.h>

int main()
{
    char products[3][30] = {
        "Camera",
        "Camp Stove",
        "Candle"
    };

    char search[30];
    int i;

    printf("Enter product name: ");
    scanf("%29s", search);

    printf("Products found:\n");

    for (i = 0; i < 3; i++)
    {
        if (strstr(products[i], search) != NULL)
        {
            printf("%s\n", products[i]);
        }
    }

    return 0;
}
