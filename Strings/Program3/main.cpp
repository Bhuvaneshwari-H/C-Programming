//FUNCTIONS USED
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string c1="abc",c2="abc";
    cout<<c1.compare(c2)<<endl;
    string s1,s2;
    cout<<"Enter two strings"<<endl;
    cin>>s1>>s2;
    if(!s1.compare(s2)){                     //COMPARE FUNCTION
        cout<<"Strings are equal"<<endl;
    }
    else
        cout<<"Strings are unequal"<<endl;

    string s3;
    cout<<"Enter a string";
    cin>>s3;
    s3.clear();                                //CLEAR FUNCTION
    if(s3.empty())                            //EMPTY FUNCTION
        cout<<"String is empty"<<endl;

    string s4="Bhuvxyzana";
    s4.erase(4,3);                           //ERASE FUNCTION
    cout<<s4<<endl;
    string s5="Bhuvaneshwari";
    cout<<s5.find("ar")<<endl;                //FIND FUNCTION

    string s6="pueth";
    s6.insert(2,"ne");                       //INSERT FUNCTION
    cout<<s6<<endl;

    string s7="Helloo";
    cout<<s7.size()<<endl;
    for(int i=0;i<s7.length();i++)         //LENGTH FUNCTION
        cout<<s7[i]<<endl;

    string s8="Everyone";
    cout<<s8.substr(5,3)<<endl;          //SUBSTRING FUNCTION

    int s10=786;
    cout<<to_string(s10)+"2"<<endl;     //TOSTRING FUNCTION

    string s11="bhuvana";
    sort(s11.begin(),s11.end());       //SORT FUNCTION
    cout<<s11<<endl;

    string s12="Gayathri";
    transform(s12.begin(),s12.end(),s12.begin(), ::toupper);   //TOUPPER FUNCTION
    cout<<s12<<endl;

    string s13="GAYathri";
    transform(s12.begin(),s12.end(),s12.begin(), ::tolower);   //TOLOWER FUNCTION
    cout<<s12<<endl;

    string s9="345";
    int x=stoi(s1);                     //STRING TO INTEGER CONVERTER--BUT NOT WORKING
    cout<<x+2<<endl;

                         //KNOW MORE ABOUT STL--STANDARD TEMPLATE LIBRARY
}
