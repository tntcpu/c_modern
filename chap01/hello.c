#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Item\a\n");
        sleep(1);
    }

    return 0;
}
