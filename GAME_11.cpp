#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(vector<ll>&c, vector<ll>&b){
    sort(c.begin(), c.end());
    sort(b.begin(), b.end());
    ll i=c.size()-1, j=b.size()-1;
    ll ans=0;
    ll count=0;
    while(count<4){
        ans+=c[i--];
        count++;
    }
    while(count<8){
        ans+=b[j--];
        count++;
    }
    while(count<11 && i>=0 && j>=0){
        if(c[i]>b[j]){
            ans+=c[i--];
        }else{
            ans+=b[j--];
        }
        count++;
    }
    while(count<11 && i>=0){
        ans+=c[i--];
        count++;
    }
    while(count<11 && j>=0){
        ans+=b[j--];
        count++;
    }
    return ans;
}
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll m,n;
	    cin>>m>>n;
	    vector<ll>c(m),b(n);
	    for(ll i=0;i<m;i++) cin>>c[i];
	    for(ll i=0;i<n;i++) cin>>b[i];
	    if((m+n)<11 or m<4 or n<4)
	    cout<<-1<<endl;
	    else
	    cout<<solve(c,b)<<endl;
	}
	return 0;

}