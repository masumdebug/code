# include <stdio.h>
int main()
{
    int arr[5] = {5, 500, 60, 90, 89};
    for (int i=0; i<5; i++)
    {
        printf ("\n value of i = %d", i);
        printf(" . and value of array arr[%d] = %d ",i, arr[i]);
    }
    printf("\n Loop exited");
    
}