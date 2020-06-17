#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007;


int main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
        ll n,k,v=0,x=0,y;
        cin>>n>>k;
        f(i,0,n){
            cin>>y;
            x=min(y,k);
            v+=(y-x);
        }
        debug(v)
        
        
        
    }
    
    return 0;
}

