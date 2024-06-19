#include<bits/stdc++.h>
using namespace std;
//Ashish Kumar Verma
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int pa=0,pb=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]=='R' and b[i]=='S') pa++;
            else if(a[i]=='R' and b[i]=='P') pb++;
            else if(a[i]=='S' and b[i]=='P') pa++;
            else if(a[i]=='S' and b[i]=='R') pb++;
            else if(a[i]=='P' and b[i]=='R') pa++;
            else if(a[i]=='P' and b[i]=='S') pb++;
            else cnt++;
        }
        if(pa>pb) cout<<0<<endl;
        else if(pa<=pb) cout<<(abs(n+cnt-pb))<<endl;
    }
    return 0;
}