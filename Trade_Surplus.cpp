#include<bits/stdc++.h>
using namespace std;
//Ashish Kumar Verma

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int net1=a-b;
        int net2=c-d;
        int netval=net1+net2;
        if(netval<0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}