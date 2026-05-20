#include <iostream>
using namespace std;

int id[1000], bal[1000], n=0;

int main()
{
    int q;
    cin>>q;

    while(q--)
    {
        string s;
        cin>>s;

        if(s=="CREATE")
        {
            int x,y,f=0;
            cin>>x>>y;

            for(int i=0;i<n;i++)
            {
                if(id[i]==x)
                {
                    bal[i]+=y;
                    f=1;
                }
            }

            if(f==0)
            {
                id[n]=x;
                bal[n]=y;
                n++;
                cout<<"true\n";
            }
            else
                cout<<"false\n";
        }

        else if(s=="DEBIT")
        {
            int x,y,f=0;
            cin>>x>>y;

            for(int i=0;i<n;i++)
            {
                if(id[i]==x && bal[i]>=y)
                {
                    bal[i]-=y;
                    f=1;
                }
            }

            if(f==1) cout<<"true\n";
            else cout<<"false\n";
        }

        else if(s=="CREDIT")
        {
            int x,y,f=0;
            cin>>x>>y;

            for(int i=0;i<n;i++)
            {
                if(id[i]==x)
                {
                    bal[i]+=y;
                    f=1;
                }
            }

            if(f==1) cout<<"true\n";
            else cout<<"false\n";
        }

        else
        {
            int x,f=0;
            cin>>x;

            for(int i=0;i<n;i++)
            {
                if(id[i]==x)
                {
                    cout<<bal[i]<<"\n";
                    f=1;
                }
            }

            if(f==0)
                cout<<-1<<"\n";
        }
    }
}