#include<iostream>
using namespace std;

int main()
{
    int arr[15] = {33, 34, 35, 36, 37, 38};
    int n = 6;
    int k;

    cout<< "\n Original Array : ";
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<< "\n Enter the value you want to rotate the array to the left : ";
    cin>> k;

    k= k % n;

    for(int i=0; i<k; i++)
    {
        int temp = arr[0];
        for(int j=0; j<n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }

    cout<< "\n Array after rotation:  ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i] <<" ";
    }

    cout<< "\n Enter the value you want to rotate the array to the right : ";
    cin>> k;

    k= k % n;

    for(int i=0; i<k; i++)
    {
        int temp = arr[n-1];
        for(int j=n-1; j>0; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }

    cout<< "\n Array after rotation:  ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}