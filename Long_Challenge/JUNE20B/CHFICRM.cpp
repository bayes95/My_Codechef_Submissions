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
string y="YES";
string g="NO";

int main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
        ll n,bl=0,x;
        ll a[4]={0};
        cin>>n;
        f(i,0,n){
            cin>>x;
            if(bl==0){
                if(x==5)    a[1]+=1;
                else    if(x==10 and a[(10/5)-1]>0){a[2]+=1;a[1]-=1;}
                else    if(x==15 and a[2]>0){a[2]-=1;a[3]+=1;}
                else    if(x==15 and a[1]>1){a[1]-=2;a[3]+=1;}
                else    bl=1;
            }
        }
        if(bl==0)   debug(y)
        else    debug(g)        
    
        
        
    }
    
    return 0;
}

