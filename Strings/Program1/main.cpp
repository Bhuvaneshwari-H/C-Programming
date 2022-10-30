//JUST DECLRING AND PRINTING A STRING

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string str1(7,'B');
    string str2;
    string str3;
    getline(cin,str2);
    cout<<str2<<endl;
    cin>>str3;
    cout<<str3<<endl;
    cout<<"Enter a string"<<endl;
    cin>>str;
    cout<<"The entered string is"<<endl;
    cout<<str<<endl;
    cout<<"The second entered string is"<<endl;
    cout<<str1;
    return 0;
}
