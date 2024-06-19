#include<bits/stdc++.h>
using namespace std;
//Ashish Kumar Verma
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        int i1=0,i2=1,i3=2;
        int flg=0;
        if(n<)
        while(i3<n){
            if(s[i1]=='0' and s[i2]=='1' and s[i3]=='0'){
                cout<<"No"<<endl;
                flg=1;
                break;
            }
            i1++;
            i2++;
            i3++;
        }
        if(flg==0){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}