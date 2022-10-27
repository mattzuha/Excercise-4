#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_array(int *data, int length)
{
    for (int i = 0; i < length; i++)
    {
        data[i] = rand() % 9;
        printf("%d ", data[i]);
    }
}

void check(int *data, int length, int num)
{
    int flag = 0;
    for (int i = 0; i < length; i++)
    {
        if (num == data[i])
        {
            flag++;
        }
    }
    if (flag != 0)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }
}

int main()
{
    srand(time(0));

    int length;
    printf("Enter length: ");
    scanf("%d", &length);

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int *arr = (int *)malloc(length * sizeof(int));

    random_array(arr, length);
    check(arr, length, number);

    free(arr);
    return 0;
}