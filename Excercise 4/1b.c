#include <stdio.h>
#include <stdlib.h>

void multiplication(int *data1, int *data2, int length, int *result)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            result[i * length + j] = 0;
            for (int k = 0; k < length; k++)
            {
                result[i * length + j] += data1[i * length + k] * data2[k * length + j];
            }
        }
    }
}

void get_matrix(int *data, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &data[i * length + j]);
        }
    }
    printf("\n");
}

void print_matrix(int *result, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("%d  ", result[i * length + j]);
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
    int *array2 = (int *)malloc(length * length * sizeof(int));

    get_matrix(array1, length);
    get_matrix(array2, length);

    int *result = (int *)malloc(length * length * sizeof(int));

    multiplication(array1, array2, length, result);
    print_matrix(result, length);

    free(array1);
    free(array2);
    free(result);

    return 0;
}
