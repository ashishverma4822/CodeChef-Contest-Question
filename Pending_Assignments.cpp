#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int k=a*b;
        c=c*24*60;
        if(k<=c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}