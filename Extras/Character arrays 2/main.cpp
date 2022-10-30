//PRINTING CHARACTER ARRAYS 2

#include <iostream>
using namespace std;
int main()
{
    char arr[100];
    cout<<"Enter the character array";
    cin>>arr;
    cout<<"The character array is:"<<endl;
    cout<<arr<<endl;
    //You can also print it as:
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    }
}
