#include<iostream>
using namespace std;

int main()
{
    int arr[15] = {65, 34, 29, 78, 34, 88, 29, 65, 12, 12};
    int n = 10;

    cout<< " \n Original Array : ";
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<< " \n The size of Original Array : "<< n;

    // deletion of duplicate elements
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j; k<n-1; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    cout<< "\n Array after Deletion:  ";
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<< "\n The size of Array with Unique Elements : "<< n;
    return 0;

}