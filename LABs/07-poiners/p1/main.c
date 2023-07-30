 #include <stdio.h>
 
int maximum_difference(int* ptr_array, int arr_size)
{
    int max_diff = ptr_array[1] - ptr_array[0];
    int i, j;
    for (i = 0; i < arr_size; i++)
    {
        for (j = i + 1; j < arr_size; j++)
        {
            if (ptr_array[j] - ptr_array[i] > max_diff)
                max_diff = ptr_array[j] - ptr_array[i];
        }
    }
    return max_diff;
}
 
int main()
{
    int array[5] = {0},n,i,result;
	  printf("\n Enter size of the array: ");
    scanf("%d", &n);
    printf("\n Enter %d elements of an array: ", n);
    for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
     result= maximum_difference(array, n);
    printf("Maximum difference between 2 elements is %d",result );
    return 0;
}