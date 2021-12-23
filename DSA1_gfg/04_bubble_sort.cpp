// Bubble sort:--

#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble_sort(int arr[], int n)
{
    int i,j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void display(int arr[], int size)
{
    int i,j;
    for(i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// driver code:

int main()
{
    int arr[] = {27,14,22,88,65,42,1};

    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,n);
    cout<<"Sorted Array: \n";

    display(arr, n);
    return 0;
}