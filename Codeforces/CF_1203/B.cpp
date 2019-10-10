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
        ll N=4*n;
        ll a[N+10],f=1;
        for(i=1;i<=N;i++)
            cin>>a[i];
        sort(a+1,a+N+1);
        ll prod=a[1]*a[N];
        if((a[1] != a[2]) || (a[N-1] != a[N]))
        {
            cout<<"NO\n";
            continue;
        }
        for(i=3;i<N/2;i+=2)
        {
            if(prod != a[i]*a[N-i+1])
            {
                f=0;
                break;
            }
            if((a[i] != a[i+1]) || (a[N-i] != a[N-i+1]))
            {
                f=0;
                break;
            }
        }
        if(f)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}