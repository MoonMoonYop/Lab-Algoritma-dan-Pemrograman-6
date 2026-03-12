#include <iostream>
using namespace std;

int main()
{
    //label
    // goto a;
    // b:
    // cout<<"Laboratorium ";
    // goto c;
    // a:
    // cout<<"Ilmu ";
    // goto b;
    // c:
    // cout<<"Komputer";

    //increment decreement
    int a=1;
    
    x:
    cout<<a<<endl;
    a++;
    if (a<=10)
    {
        goto x;
    }

    return 0;
}