#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long int;
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
string h = "No";
string g = "Yes";
ll a[100007];
ll b[100007];
int main() {
    vfast
    ll t,n,x,y,v;
    cin>>t;
    while (t--) {
        v=0;
        x=0;
        y=0;
        cin>>n;
        f(i,0,n)    cin>>a[i];
        f(i,0,n){    
            cin>>b[i];
            if(x==y && a[i]==b[i])  v+=a[i];
            x+=a[i];
            y+=b[i];            
        }
        debug(v)
        
        }

    return 0;
}

