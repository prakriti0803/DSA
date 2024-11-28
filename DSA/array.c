#include<stdio.h>

void ins_beg(int data, int arr[], int n) 
{
    int i;
     printf("\nEnter the element to be inserted at the beg: ");
    scanf("%d", &data);
    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = data;
}
void ins_end(int data, int arr[],int n)
{
     printf("\nEnter the element to be inserted at the end: ");
    scanf("%d", &data);
    int i;
    arr[n]=data;
}
void ins_pos(int data, int arr[], int n, int pos)
{
     printf("\n enter the postion for insertion");
    scanf("%d",&pos);
    printf("\nEnter the element to be inserted at the position: ");
    scanf("%d", &data);
    int i;
    for(i=n; i>=pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=data;
}
int main() {
    int n, i, data, pos, choice;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *ptr= (int*)malloc(n*sizeof(int));
    int arr[n + 1];
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n1.Insertion at the begining\n2.Insertin at the end\n3.Insertion at the postion");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: ins_beg(data, arr, n);
        break;
        case 2: ins_end(data, arr, n );
        break;
        case 3:ins_pos(data, arr, n, pos);
        break;
        default:
        printf("Invalid Choice");
    }
    printf("The array after insertion is:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}