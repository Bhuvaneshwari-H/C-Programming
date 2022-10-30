//POINTERS INTRODUCTION

#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int* aptr=&a;
    cout<<a<<endl;
    cout<<*aptr<<endl;
    cout<<&aptr<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;

    *aptr=20;
    cout<<a<<endl;
    aptr++;
    cout<<aptr<<endl;

    char x='a';
    char* xptr=&x;
    cout<<x<<endl;
    cout<<*xptr<<endl;
    cout<<&xptr<<endl;
    cout<<&x<<endl;
    cout<<xptr<<endl;

    *xptr='b';
    cout<<x<<endl;
    xptr++;
    cout<<xptr<<endl;
    return 0;
}
