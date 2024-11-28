#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
 int i,top=-1;
 int arr[MAXSIZE];
void push()
{
    int n;
    printf("Enter the element to be pushed: ");
        scanf("%d", &n);
    while(top!=MAXSIZE-1)
    {
        top++;
        arr[top]=n;
    }
}
void display()
{
  printf("The reversed stack is:");
  for(i=top; i>=0; i--)
  {
    printf("\n %d", arr[i]);
  }
}
int main()
{
    push();
    display();
}