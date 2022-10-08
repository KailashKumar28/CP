#include<bits/stdc++.h>
using namespace std;
//#define ll lond long
void solve()
{
    int a,b,c,d;
        cin>>a>>b;
        int ok[a];
        set<pair<int,int>,greater<pair<int,int>>> p,q;
        vector<int> y(a+1,a);
        for(int i=0;i<b;i++)
        {
            cin>>c>>d;
            if(y[c]>d)
            {
                y[c]=d;
            }
        }
        for(int i=1;i<=a;i++)
        {
            p.insert({y[i],i});
            int uji=-1;
        }
        for(int i=a-1;i>=0;i--)
        {
            
            while(!p.empty()&&p.begin()->first==i+1)
            {
                int v=p.begin()->second;
                p.erase(p.begin());
                q.insert({v,y[v]});
            }
            if(q.empty())
            {
                cout<<-1<<endl;
                return;
            }
            int v=q.begin()->first;
            q.erase(q.begin());
            ok[i]=v;
        }
        for(int i=0;i<a;i++)
        {
            cout<<ok[i]<<" ";
        }
        cout<<endl;
}
int main()
{
    //freopen("a.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }
    return 0;
}