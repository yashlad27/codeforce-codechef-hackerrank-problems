// INSERTION SORT:-

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 0; i < n; i++)
    {
        key = arr[i];
        j=i-1;

        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

void display(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={12,1,11,4,13,67,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr, n);
    display(arr, n);

    return 0;
}