#include <stdio.h>
#include <stdlib.h>

void multiplication(int *data1, int *data2, int length, int *result)
{
    for (int i = 0; i < length; i++)
    {
        result[i] = 0;
        for (int j = 0; j < length; j++)
        {

            result[i] += data1[i * length + j] * data2[j];
        }
    }
}

void get_matrix(int *data, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d ", &data[i * length + j]);
        }
    }
    printf("\n");
}

void get_vector(int *data, int length)
{
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &data[i]);
    }
    printf("\n");
}

void print_matrix(int *result, int length)
{
    for (int i = 0; i < length; i++)
    {
        {
            printf("%d  ", result[i]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int length;
    printf("Enter n: ");
    scanf("%d", &length);

    int *array1 = (int *)malloc(length * length * sizeof(int));
    int *array2 = (int *)malloc(length * sizeof(int));

    get_matrix(array1, length);
    get_vector(array2, length);

    int *result = (int *)malloc(length * sizeof(int));

    multiplication(array1, array2, length, result);
    print_matrix(result, length);

    free(array1);
    free(array2);
    free(result);

    return 0;
}