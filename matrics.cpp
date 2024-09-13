#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int m, n, i, j;  

    cout<<"Enter the matrix size m*n:";  
    cin>>m>>n;

    cout<<"Enter the elements of the array:"<<endl;
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            cin>>arr[i][j];  
        }
    }

    cout<<"Entered array:" <<endl;
    for(i = 0;i<m;i++) 
    {
        for(j=0;j<n;j++)
        { 
    
            cout<<arr[i][j] << " "; 
        }
        cout<<endl; 
    }

    return 0;
}
