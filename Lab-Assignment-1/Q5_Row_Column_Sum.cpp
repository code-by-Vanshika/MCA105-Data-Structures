#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int r=3,c=3;

    cout<<  "\n Original Matrix : \n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<< endl;
    }
    for(int i=0; i<r; i++)
    {
        int sum=0;
        for(int j=0; j<c; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<< "Sum of Row "<<i<<" = "<<sum;
        cout<< endl;
    }

       for(int i=0; i<c; i++)
    {
        int sum=0;
        for(int j=0; j<r; j++)
        {
            sum = sum + arr[j][i];
        }
        cout<< "Sum of Column "<<i<<" = "<<sum;
        cout<< endl;
    }
    return 0;
}