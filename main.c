#include <stdio.h>

void bubble_sort(int, int*);
void insertion_sort(int, int*);
void selection_sort(int, int*);

int main() {
    int i, size, choice;

    do
    {
        printf("Enter\n1 to use bubble sort.\n2 for selection sort.\n3 for insertion sort.\n");
        scanf("%d", &choice);
    } while(choice != 1 && choice != 2 && choice != 3);

    printf("Enter the size of the array:");
    scanf("%d", &size);
    int a[size];

    printf("Enter an array:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The unsorted array is:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    if(choice == 1)
        bubble_sort(size, a);
    else if (choice == 2)
        selection_sort(size, a);
    else
        insertion_sort(size, a);
    return 0;
}

void bubble_sort(int size, int a[])
{
    printf("\n\nYOU ARE USING BUBBLE SORT");
    int i, j, temp;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size-1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nThe sorted array is:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

void insertion_sort(int size, int a[])
{
    printf("\n\nYOU ARE USING INSERTION SORT");
    int i, j, temp;
    for(i = 1; i < size; i++)
    {
        j = i - 1;
        temp = a[i];
        while(a[j] > temp && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    printf("\nThe sorted array is:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

void selection_sort(int size, int a[])
{
    printf("\n\nYOU ARE USING SELECTION SORT");
    int i, j, min_index, temp;
    for(i = 0; i < size; i++)
    {
        min_index = i;
        for(j = i+1; j < size; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    printf("\nThe sorted array is:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}