//FORM THE BIGGEST NUMBER FROM THE GIVEN NUMBER

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s1="34567890";
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1<<endl;
}
