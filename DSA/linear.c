#include<stdio.h>
int main()
{
    int arr[5];
    int key, i;
    printf("Enter the element of array");
    for(i=1;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&key);
    for(i=0; i<5; i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at %d", i);
        }
    }
}