
#include <iostream>
using namespace std;

int main()
{
    long long l,r;
    cin>>l>>r;

    long long x=0;

    for(long long i=l;i<=r;i++)
        x=x^i;

    if(x%2==0)
        cout<<"even";
    else
        cout<<"odd";
}
