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
    ll ar[62];
    ar[0]=1;
    f(i,1,62)   ar[i]=ar[i-1]*2;
    cin>>t;
    f(w,0,t){
        ll n,c=1,bl=0,x,k;
        cin>>n;
        x=n;
        k=n;
        while(x>1 and bl==0){
            if(x%2==0)  {c+=1;x/=2;}
            else    bl=1;
        }
        
        debug(k/ar[c])
    }
    
    return 0;
}


