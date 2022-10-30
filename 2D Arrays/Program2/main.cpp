//SEARCHING AN ELEMENT IN THE 2D ARRAY--BRUTE FORCE--TIME COMPLEXITY--O(mn)

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
    int key;
    cout<<"Enter the key element"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                cout<<"ELEMENT FOUND AT THE INDEX: "<<i<<" "<<j<<endl;
            }
        }
    }
}
