#include<stdio.h>
void sort();
int main()
{
    sort();
    return 0; 
}

void sort()
{
    int i;
    int arr[5];
    int min, temp;

    printf("Enter the elements of the array\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
        if (arr[i]< arr[i+1])
        {
          min=arr[i];  
        }
        temp=arr[i];
        arr[i]=min;
        min=temp;
    }
}
