#include<bits/stdc++.h>
using namespace std;
//Ashish Kumar Verma
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll X;
        ll max_val=INT_MIN;
        for(ll x=0;x<=n;x++){
            ll cal=(x%k)*(abs(n-x)%k);
            if(cal>max_val){
                X=x;
                max_val=cal;
            }
        }
        cout<<X<<endl;
    }
    return 0;
}