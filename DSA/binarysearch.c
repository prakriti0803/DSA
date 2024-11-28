#include<stdio.h>
void Binary();

int main()
{
    Binary();
    return 0; 
}

void Binary()
{
    int i;
    int arr[5];
    int mid, l = 0, r = 4, key;

    printf("Enter the elements of the array (in sorted order):\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched:\n");
    scanf("%d", &key);

    while(l <= r)
    {
        mid = (l + r) / 2;

        if(key == arr[mid])
        {
            printf("Element found at index %d\n", mid);
            return;
        }
        else if (key < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    printf("Element not found\n"); 
}
