
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,count=INT_MIN,ans=0;
        vector<ll> vp;
        cin>>n;
        map<ll,ll> map;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            map[a[i]]++;
            
            

        }
        if(n>2)
        {
           if(n%2==0 )
            {
                ans++;
            }
            else if(n%2!=0  )
            {
                ans=0;
            }
            
         
        }
        else if(n<=2)
        {
            ans++;
        }


        if(ans>0)
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }

    }
}