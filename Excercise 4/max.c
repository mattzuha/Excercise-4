#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_array(int* data, int length)
{
    for(int i = 0; i < length; i++)
    {
        data[i] = rand() % 9;
        printf("%d ", data[i]);
    }
}

void get_max(int *data, int length)
{
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        if (max < data[i])
        {
            max = data[i];
        }
    }

    printf("\nMax is %d", max);
}

int main()
{
    srand(time(0));

    int length;
    printf("Enter length: ");
    scanf("%d", &length);
    
    int *arr = (int *)malloc(length * sizeof(int));

    random_array(arr, length);
    get_max(arr, length);

    free(arr);
    return 0;
}