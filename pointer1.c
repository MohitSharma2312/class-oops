#include <stdio.h>
int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int *ptra= &arr[]; 

    printf("the address of pointer to a is %p\n", &ptra);
    printf("the address of a is %p\n", &arr[3]);
    printf("the address of  a is %d\n", *ptra +1);
     printf("the value of  a is %d\n", *ptra);

    return 0;
}