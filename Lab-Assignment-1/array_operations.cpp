#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    int n = 0;
    int choice;

    do{
        cout<< "\n --- MENU ---";
        cout<< "\n 1. CREATE ";
        cout<< "\n 2. DISPLAY ";
        cout<< "\n 3. INSERT ";
        cout<< "\n 4. DELETE ";
        cout<< "\n 5. LINEAR SEARCH ";
        cout<< "\n 6. EXIT ";
        cout<< "\n You Can Enter Your Choice : ";

        cin>> choice;

        switch(choice){

            case 1: 
            {
                cout<< "\n Enter no. of Elements (upto 50): ";
                cin>> n;

                for(int i=0; i<n; i++)
                {
                    cout<< "\n Enter Element "<<i+1<<" : ";
                    cin>> arr[i];
                }
                cout<< "\n Array Created Successfully :)";

                break;
            }
            case 2:
            {
                if(n==0){
                    cout<< "\n Array is Empty";
                }
                else{
                    cout<< "\n Array Elements are: \n ";

                    for(int i=0; i<n; i++)
                    {
                        cout<< arr[i] <<" ";
                    }
                }
                break;
            }
            case 3: 
            {
                int pos, value;
                int max_capacity = 50;

                if(n >= max_capacity) {
                    cout<< "\n Array reached its limit. No element can be inserted ";
                }
                else{
                    cout<< " \n Enter the position where you want to insert the element: ";
                    cin>> pos;
                
                    cout<< "\n Enter the Value : ";
                    cin>> value;

                    for(int i=n; i>=pos; i--)
                    {
                        arr[i] = arr[i-1];
                    }

                    arr[pos-1] = value;
                    n++;

                    cout<< "\n Element Inserted Successfully :) ";
                }
                break;
            }
            case 4:
            {
                int pos;

                if(n==0){
                    cout<< "\n Array is Empty ";
                }
                else{
                    cout<< "\n Enter the position of the element to be deleted : ";
                    cin>> pos;

                    if(pos<1 || pos>n)
                    {
                        cout<< "\n Invalid Index!! ";
                    }
                    else{
                        for(int i=pos-1; i<n-1; i++)
                        {
                            arr[i] = arr[i+1];
                        }
                        n--;
                        cout<<" \n Element Deleted Successfully :)";
                    }
                }
                break; 
            }
            case 5:
            {
                int value;
                bool found = false;

                cout<<" \n Enter the element you want to search : ";
                cin>> value;

                for(int i=0; i<n; i++)
                {
                    if(value==arr[i])
                    {
                        cout<<" \n Element found at position : "<<i+1;
                        found = true;
                        break;
                    }
                }   
                if(!found) 
                {
                    cout<< "\n Element does not exsits !!";
                }
                
                break;
            }
            case 6:
            {
                cout<< "\n Exiting The Program :) ";
                break;
            }
            default:
            {
                cout<< "\n Invalid Choice! Please try again.  ";
            }
        }
    }while(choice!=6);
    
    return 0;
}
