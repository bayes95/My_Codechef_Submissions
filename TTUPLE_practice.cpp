#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
#include<cmath>
#include <iomanip>    
using namespace std;
#define ll long 
#define lld long long int
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main() {
    vfast
    ll t;
    cin>>t;
    while(t--){
        ll c,n;
        cin>>n;
        std::set< std::pair<int, int> > m;
        for(ll i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            m.insert(make_pair(x, y));            
        }
        int a=0,y=0,bl=0;
        string s;
        
       for(auto&& x : m) {
           if((x.first)-a>=0 && (x.second)-y>=0){
               if((x.first)-a > 0){  for(int h=a;h<x.first;h++) {s+="R";}  }
               if((x.second)-y > 0){for(int h=y;h<x.second;h++){    s+="U";}}
               a=x.first;y=x.second;
           }
           else if((x.first)-a < 0 || (x.second)-y < 0){ bl=1;break; }          
           
    //-std::cout << x.first << ' ' << x.second << std::endl;
}
        if(bl==0)   cout<<"YES\n"<<s<<"\n";
        else    if(bl==1)   cout<<"NO\n";
        
        
        
    }
            
            
    
    return 0;
}
