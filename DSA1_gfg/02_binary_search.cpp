//  ITERATIVE BINARY SEARCH:----------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l, int r, int x)
{
    while(l<=r)
    {
        int m = l + (r-l)/2;

        // check if x is present at mid;
        if(arr[m]==x)
            return m;

        // if x is greater, ignore left half:
        if(arr[m]<x)
            l = m + 1;

        // if x is less, ignore right half:
        else
            r = m-1;
    }
    // if x is not present
    return -1;
}

int main(void)
{
    int arr[] = {2,3,4,10,40};
    int x = 10; // number to be searched

    int n = sizeof(arr)/sizeof(arr[0]);

    int result = binary_search(arr, 0, n-1, x);
    (result==-1)
                ?cout<<"Element is not present in array"
                :cout<<"Element is present at index "<<result;

    return 0;
}