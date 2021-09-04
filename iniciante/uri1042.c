#include <math.h>
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{

    int array[3];
    
    scanf("%d %d %d", &array[0], &array[1], &array[2]);

    int arrayStart[3] = {array[0],array[1],array[2]};

    int i, j;
    for (i = 0; i < 3 - 1; i++)
    {
        for (j = 0; j < 3 - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }

    printArray(array,3);
    printf("\n");
    printArray(arrayStart,3);


    // Last i elements are already in place

    return 0;
}