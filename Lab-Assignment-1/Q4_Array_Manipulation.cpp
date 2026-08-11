#include<iostream>
using namespace std;

int main()
{
    // reversing the array
    int arr[5] = {10,20,30,40,50};
    int n = 5;

    cout<<" \n Original Array : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
    
    for(int i=0; i<n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    cout<<" \n Reversed Array : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }

    // matrix multiplication
    int arrA[2][3] = {{1,2,3},{4,5,6}} ;
    int arrB[3][2] = {{7,8},{9,10},{11,12}};
    int arrC[2][2];
    int r1 = 2, c1 = 3;
    int r2 = 3, c2 = 2;
    
    cout<<"\n Array A : \n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<arrA[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<"\n Array B : \n";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<arrB[i][j]<< " ";
        }
        cout<<endl;
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            arrC[i][j] = 0;
            for(int k=0; k<c1; k++)
            {
                arrC[i][j] += arrA[i][k] * arrB[k][j]; 
            }
        }
    }
    cout<<"\n Resultant Matrix : \n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<arrC[i][j]<< " ";
        }
        cout<<endl;
    }

    // transpose of matrix
    int A[3][2] = {{1,2},{4,5},{7,8}};
    int transpose[2][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }

    cout<<  "\n Original Matrix : \n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<A[i][j]<< " ";
        }
        cout<< endl;
    }
    cout<<  "\n Transpose of Matrix : \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<transpose[i][j]<< " ";
        }
        cout<< endl;
    }
    return 0;
}