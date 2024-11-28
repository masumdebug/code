# include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr;
    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);
    // printf("%d ", arr[3]);
    // printf("%d ", arr[4]);
    // int sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    // int avg = sum / 5;
    // printf("\n Average of array is %d", avg);
    // printf("\n Sum of array is %d", sum);
    // printf ("\n memory address of a[0] %u", arr);
    // printf ("\n memory address of a[0] %u", &arr[0]);
    
    int var = 55;
    printf ("%d \n",var);
    int* ptr = &var;
    printf("%u \n",ptr);
    printf ("%d \n",*ptr); 
    

    return 0;
}