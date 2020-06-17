
#include <bits/stdc++.h> 
using namespace std;
int v[2070]={0},u[2070],w[13]={0};
long long int ans=0;
int sm,em;
long sy,ey;
void func(){v[5]=1,v[10]=1,v[11]=1,v[16]=1,v[21]=1,v[22]=1,v[27]=1;v[33]=1;
w[1]=5,w[2]=1,w[3]=5,w[4]=5,w[5]=1,w[6]=5,w[7]=6;w[0]=6;
int j=33;u[0]=0;
for(int i=8;j<2023;i++)  {j+=w[i%7];v[j]=1;}
for(int i=1;i<=2022;i++)  u[i]=u[i-1]+v[i];
}
int func1(){ans=0;
long a,b;
a=(sy-5)/196;
a=(a+1)*196;a+=5;
ans+=(u[196]-u[(sy-5)%196]);
b=(ey-5)/196;
b=b*196;b+=5;
ans+=(u[(ey-5)%196]-0);
ans+=((b-a)*u[196]);
cout<<ans<<"\n";
return 0;
}
int func2(){
    long a=ey-sy;
    ans=u[((sy-5)%196)+(a+5)]-u[(sy-5)%196];
    cout<<ans<<"\n";
    return 0;
}
int main(){
    func();
    
    for(int i=1;i<2021;i++) {
        if(v[i]==1) cout<<i<<" ";
    }
    /*
    
    int t;
    cin>>t;
    while(t--){
        ans=0;
        cin>>sm>>sy;
        cin>>em>>ey;
        if(ey==1)   ey=2;
        if((sm!=2 || sm!=1) && sy+1<=ey)   {sy+=1;sm=2;}
        if(em==1 && ey-1>=sy && ey!=1)   ey-=1,em=2;
        if((sm==1 || sm==2) && em>=2 && sy<=ey ){   
            
            if(sy==ey)  cout<<u[sy]-u[sy-1]<<"\n";
            else    cout<<u[ey]-u[sy-1]<<"\n";
        }
        else    cout<<ans<<"\n";        
    }
    
    
    */
    
    return 0;
}


