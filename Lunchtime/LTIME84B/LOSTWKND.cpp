#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = int;
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
ll a[5];

int main() {
    vfast
    ll t, p;
    cin>>t;
    while (t--) {
        f(i, 0, 5) cin >> a[i];
        cin>>p;

        ll v = 0;

        f(i, 0, 5) {
            v += (p * a[i]);
        }

        if (v <= 120) debug(h)
        else debug(g)
        }

    return 0;
}

