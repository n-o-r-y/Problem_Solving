#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    ll prefix[n+1];
    for(ll i=0;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll s,e,ans=0;
        cin>>s>>e;
        if(s==0)
        {
            ans=prefix[e];
        }
        else
        {
            ans=prefix[e]-prefix[s-1];
        }
        cout<<ans<<endl;
        ans=0;
    }
    return 0;
}
