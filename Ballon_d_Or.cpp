#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;++i) cin>>v[i];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]==2) cnt++;
    }
    if(cnt==8) cout<<"YES"<<endl;
    else if(cnt==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool testcase = true;
    ll test;
    if (testcase)
    {
        cin >> test;
        while (test--)
        {
            helpMe();
        }
    }
    else
    {
        helpMe();
    }
    return 0;
}