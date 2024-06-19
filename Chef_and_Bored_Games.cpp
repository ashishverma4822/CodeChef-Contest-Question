#include<bits/stdc++.h>
using namespace std;
//Ashish Kumar Verma
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=1,uttar=0;
        while(n-i+1>0){
            uttar=uttar+(n-i+1)*(n-i+1);
            i=i+2;
        }
        cout<<uttar<<endl;
    }
    return 0;
}