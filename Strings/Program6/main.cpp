//MAXIMUM TIMES--OCCURENCE OF CHARACTERS

#include <iostream>

using namespace std;

int main()
{
    string s1="puneeth";
    int freq[26];
    for(int i=0;i<26;i++)
        freq[i]=0;
    for(int i=0;i<s1.size();i++)
        freq[s1[i]-'a']++;
    char ans='a';
    int maxf=0;
    for(int i=0;i<26;i++)
        if(freq[i]>maxf){
            maxf=freq[i];
            ans=i+'a';
        }
    cout<<maxf<<" "<<ans<<endl;
}
