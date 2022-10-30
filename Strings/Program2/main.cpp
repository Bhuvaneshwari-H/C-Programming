//APPEND

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    s1="fami";
    s2="ly";
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s1+s2<<endl;  //You can either use a + operator or use append function
    s1.append(s2);
    cout<<s1<<endl;
    cout<<s1[0]<<endl;
    cout<<s1[1]<<endl;
    cout<<s1[2]<<endl;
    cout<<s1[3]<<endl;

    string abc="asdfghj dfjk fghjkl";
    cout<<abc<<endl;
    abc.clear();
    cout<<abc<<endl;
}
