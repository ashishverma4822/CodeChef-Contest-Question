#include<bits/stdc++.h>
using namespace std;
// Ashish Kumar Verma
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d=a/b;
        int e=ceil(float(b)/c);
        cout<<e<<endl;
        // cout<<(d-e)/a<<endl;
    }
    return 0;
}