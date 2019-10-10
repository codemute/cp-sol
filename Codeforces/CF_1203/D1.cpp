#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

using namespace std;
typedef long long int ll;

bool isSubSequence(string str1, string str2, ll m, ll n) 
{ 
    if (m == 0) return true; 
    if (n == 0) return false; 
  
    if (str1[m-1] == str2[n-1]) 
        return isSubSequence(str1, str2, m-1, n-1); 
  
    return isSubSequence(str1, str2, m, n-1); 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        ll i,j,k,ans=0;
        for(i=0;i<s1.size();i++)
        {
            for(j=i;j<s1.size();j++)
            {
                string tmp="";
                for(k=0;k<i;k++)
                    tmp+=s1[k];
                for(k=j+1;k<s1.size();k++)
                    tmp+=s1[k];
                if(isSubSequence(s2,tmp,s2.size(),tmp.size()))
                    ans=max(ans,(j-i+1));
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}