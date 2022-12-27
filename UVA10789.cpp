#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define n 200000
bool prime[n + 1];
unsigned long long int res[n + 1];
void sieve_fun()
{
    
    memset(prime, true, sizeof(prime));
    prime[1]=false;
    for (long long int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (long long int j = i * 2; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

}

int main()
{
    FAST_IO;
    sieve_fun();
    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
        string str;
        cin>>str;
        string ans="";
        map<char,int>m;
        for(auto x:str)
        {
            m[x]++;
        }
        for(auto [x,y]:m) 
        {
            if(prime[y]==true)
            {
                ans+=x;
            }
        }

        printf("Case %d: ",i);
        i++;
        if(!ans.size())
        {
            printf("empty\n");
        }
        else
        {
            printf("%s\n",ans.c_str());
        }
    }
}


///check input output
