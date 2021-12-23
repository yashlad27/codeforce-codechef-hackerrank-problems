// Selection sort:--

#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;   // xp = x position
    *xp = *yp; // y position
    *yp = temp; 
}

void selection_sort(int arr[], int n)
{
    int i, j, min_ind;

    // one by one move boundary of unsorted subarray:
    for (i = 0; i < n; i++)
    {
        //finding the minimum element of the unsorted array:
        min_ind = i;
        for(j=i+1; j < n; j++)
        {
            if(arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        // swap the found element with the first element:
        swap(&arr[min_ind], &arr[i]);
    }
}

void print_array(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//driver program:

int main()
{
    int arr[] = {64, 72, 33, 12, 9, 23, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr, n);

    cout<<"Sorted array: \n";
    print_array(arr, n);
    return 0;
}