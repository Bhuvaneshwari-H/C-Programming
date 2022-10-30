//WRITE A PGM TO CHECK IF A GIVEN NUMBER IS A POWER OF 2:

#include <iostream>
using namespace std;
bool ispowerof2(int n){
    return !(n&n-1);
}

int main()
{
    cout<<ispowerof2(17)<<endl;
    return 0;
}
