//TRANSPOSE OF THE MATRIX

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the rows and columns"<<endl;
    cin>>n>>m;
    cout<<"Enter the array elements"<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The array elements are:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"The transpose of the matrix is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
}
