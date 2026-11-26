#include <stdio.h>
#include <string.h>

int main()
{
    char receipt[] = "OrderID: #12345, Date: 2024-01-15";
    char orderID[20];

    char *ptr = strchr(receipt, '#');

    if (ptr != NULL)
    {
        ptr++;

        int i = 0;

        while (ptr[i] != ',' && ptr[i] != '\0')
        {
            i++;
        }

        strncpy(orderID, ptr, i);
        orderID[i] = '\0';

        printf("Order ID: %s\n", orderID);
    }

    return 0;
}
