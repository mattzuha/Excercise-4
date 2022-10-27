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

void average(int *data, int length)
{
    float sum;
    for (int i = 0; i < length; i++)
    {
        sum += data[i];
    }
    printf("\nAverage is: %.2f", sum / length);
}

int main()
{
    srand(time(0));

    int length;
    printf("Enter length: ");
    scanf("%d", &length);

    int *arr = (int *)malloc(length * sizeof(int));

    random_array(arr, length);
    average(arr, length);

    free(arr);
    return 0;
}