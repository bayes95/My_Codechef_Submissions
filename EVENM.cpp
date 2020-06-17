#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<=n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007;
ll a[1001][1001];
//ll x[1000001];
int main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
        ll n,q,b=1,g=1;
        cin>>n;
        q=n;
        
        
        while(n-1>0){
            
            f(i,b,n){a[b][i]=g;g++;}
            
            f(i,b+1,n){a[i][n]=g;g++;}
            
            for(ll i=n-1;i>=b;i--){a[n][i]=g;g++;}
            
            for(ll i=n-1;i>b;i--){a[i][b]=g;g++;}
            
            b++;n--;   
            
        }        
        
        if(q==1)    debug(1)
        else{
        
            f(i,1,q){
                f(j,1,q)    cout<<a[i][j]<<" ";
                cout<<"\n";
            
            }
        } 
        //cout<<endl;
    }
    
    return 0;
}


