#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a[n+10];
        for(i=1;i<=n;i++)
            cin>>a[i];
        ll f=0,ok=1;
        for(i=1;i<=n-1;i++)
        {
            if(a[i+1] == a[i]+1)
                continue;
            if(a[i] == n && a[i+1] == 1)
            {
                if(!f)
                    f=1;
                else ok=0;
            }
            else
            {
                ok=0;
                break;
            }
            if(!ok) break;
        }
        if(ok)
        {
            cout<<"YES\n";
            continue;
        }
        ok=1,f=0;
        for(i=1;i<=n-1;i++)
        {
            if(a[i+1]+1 == a[i])
                continue;
            if(a[i] == 1 && a[i+1] == n)
            {
                if(!f)
                    f=1;
                else ok=0;
            }
            else
            {
                ok=0;
                break;
            }
            if(!ok) break;
        }
        if(ok)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}