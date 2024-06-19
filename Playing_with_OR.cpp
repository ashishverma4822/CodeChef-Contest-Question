#include<bits/stdc++.h>
using namespace std;
//Ashish Kumar Verma

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<int> v;
        for(int i=0;i<a;i++){
            int val;
            cin>>val;
            v.push_back(val);
        }
        int cnt=0;
        for(int i=0;i<=v.size()-b;i++){
            for(int j=i;j<b+i;j++){
                if(v[j]%2==1){
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}