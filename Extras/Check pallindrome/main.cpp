//CHECK PALINDROME

#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter number of letters"<<endl;
   cin>>n;
   char arr[n+1];
   cout<<"Enter the array of characters"<<endl;
   cin>>arr;
   bool check=1;
   for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1-i]){
        check=0;
        break;
    }
   }
   if(check)
    cout<<"It is a pallindrome";
   else
    cout<<"It is not a pallindrome";
}
