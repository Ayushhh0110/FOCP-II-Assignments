#include <iostream>
using namespace std;

int main() 
{
    int n,k;
    cin>>n>>k;

    char s[1000001];
    cin>>s;

    int ans=n;

    for(int l=1;l<=n;l++)
    {
        int cnt=0;

        for(int i=0;i<n;)
        {
            if(s[i]=='1')
            {
                cnt++;
                i+=l;
            }
            else
                i++;
        }

        if(cnt<=k)
        {
            ans=l;
            break;
        }
    }

    cout<<ans;
}
