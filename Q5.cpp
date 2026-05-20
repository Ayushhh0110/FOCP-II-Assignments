#include <iostream>
using namespace std;

class MovieTicket
{
    int a[101][101];
    int cnt[101];

public:

    MovieTicket()
    {
        for(int i=0;i<101;i++)
        {
            cnt[i]=0;

            for(int j=0;j<101;j++)
                a[i][j]=0;
        }
    }

    string BOOK(int x,int y)
    {
        if(a[x][y]==1 || cnt[y]==100)
            return "false";

        a[x][y]=1;
        cnt[y]++;

        return "true";
    }

    string CANCEL(int x,int y)
    {
        if(a[x][y]==0)
            return "false";

        a[x][y]=0;
        cnt[y]--;

        return "true";
    }

    string IS_BOOKED(int x,int y)
    {
        if(a[x][y]==1)
            return "true";

        return "false";
    }

    int AVAILABLE_TICKETS(int y)
    {
        return 100-cnt[y];
    }
};

int main()
{
    int q;
    cin>>q;

    MovieTicket m;

    while(q--)
    {
        string s;
        cin>>s;

        if(s=="BOOK")
        {
            int x,y;
            cin>>x>>y;
            cout<<m.BOOK(x,y)<<endl;
        }

        else if(s=="CANCEL")
        {
            int x,y;
            cin>>x>>y;
            cout<<m.CANCEL(x,y)<<endl;
        }

        else if(s=="IS_BOOKED")
        {
            int x,y;
            cin>>x>>y;
            cout<<m.IS_BOOKED(x,y)<<endl;
        }

        else
        {
            int y;
            cin>>y;
            cout<<m.AVAILABLE_TICKETS(y)<<endl;
        }
    }
}