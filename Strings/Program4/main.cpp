//CONVESION OF UPPER AND LOWER CASE LETTERS
//WHY 32?? DIFFERENCE OF a-A


#include <iostream>
using namespace std;
int main()
{
    string str="BHUvana@#$";
    for(int i=0;i<str.size();i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    cout<<str<<endl;

    for(int i=0;i<str.size();i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    cout<<str<<endl;
}
