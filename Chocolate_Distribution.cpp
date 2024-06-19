#include<bits/stdc++.h>
using namespace std;
//Ashish Kumar Verma
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[3];
        if(n%2==0){
            a[0]=1;
            a[1]=1;
            n--;n--;
            a[2]=n/2;
        }
        else{
            a[0]=1;
            n--;
            a[1]=n/2;
            a[2]=n/2;
        }
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }
}