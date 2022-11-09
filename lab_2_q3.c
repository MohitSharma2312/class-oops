#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int num;
    int *arr;
    int sum = 0;

    printf("Enter the total number of elements: ");
    scanf("%d", &num);

    arr=(int *)malloc(num * sizeof(int));

    for (i = 0; i < num; i++)
    {
        printf("Enter element %d : ", (i + 1));
        scanf("%d", arr + i);

        sum += *(arr + i);
    }
    float avg=sum/num;
    
    printf("Sum of Elements:%d \n", sum);
    printf("Average of Elements: %f\n",avg);
    free(arr);
    return 0;
}