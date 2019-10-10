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
    // cin>>t;
    while(t--)
    {
        ll n,i,ans=0;
        cin>>n;
        ll a[n+10],last=150002;
        set<ll> st;
        for(i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        for(i=n;i>=1;i--)
        {
            if(a[i]+1 < last)
            {
                ans++;
                last=a[i]+1;
            }
            else if(a[i] < last)
            {
                ans++;
                last=a[i];
            }
            else if(a[i]-1 < last && a[i] > 1)
            {
                ans++;
                last=a[i]-1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}