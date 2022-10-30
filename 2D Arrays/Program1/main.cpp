//PRINT THE 2D ARRAY

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of rows and columns"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the 2D array elements:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The 2D array is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
