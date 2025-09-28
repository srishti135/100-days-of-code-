    //problem:Q68: Delete an element from an array.
    #include <stdio.h>
    int main()
    {
        int arr[100], pos, i, n;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        printf("Enter the elements of the array: ");
        for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Enter the position of the element you want to delete: ");
        scanf("%d", &pos);
        // Shift elements to the left to overwrite the deleted element
        for(i = pos - 1; i < n - 1; i++)
        {   
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the size of the array
        printf("Array after deletion: ");
        for(i = 0; i < n; i++)  
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }