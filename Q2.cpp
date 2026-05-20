#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int c=0;

        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                int x=i;
                int y=n/i;

                int f=1;

                for(int j=2;j<=x && j<=y;j++)
                {
                    if(x%j==0 && y%j==0)
                    {
                        f=0;
                        break;
                    }
                }

                if(f==1)
                    c++;
            }
        }

        cout<<c<<"\n";
    }
}