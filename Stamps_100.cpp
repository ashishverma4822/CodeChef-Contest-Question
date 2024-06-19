#include<bits/stdc++.h>
using namespace std;
// Ashish Kumar Verma
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=s.size()-1;
        int j=s.size()-1;
        while(j>=0){
            if(i-j+1==3){
                if(s[j]=='1' and s[j+1]=='1'){
                    s[j+1]='0';
                    s[j+2]='0';
                }
                if(s[j]=='1' and s[j+2]=='1'){
                    // s[j+1]='0';
                    s[j+2]='0';
                }
                i--;
            }
            j--;
        }
        cout<<s<<endl;
    }
}

