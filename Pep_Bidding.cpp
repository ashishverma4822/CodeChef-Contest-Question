#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    ll n; cin>>n;
    vector<ll> a1(n),a2(n),p1(n),p2(n);
    for(int i=0;i<n;i++) cin>>a1[i];
    for(int i=0;i<n;i++) cin>>a2[i];
    for(int i=0;i<n;i++) cin>>p1[i];
    for(int i=0;i<n;i++) cin>>p2[i];
    ll aa=0,ad=0,pa=0,pd=0;
    for(int i=0;i<n;i++) aa+=a1[i];
    for(int i=0;i<n;i++) ad+=a2[i];
    for(int i=0;i<n;i++) pa+=p1[i];
    for(int i=0;i<n;i++) pd+=p2[i];
    if(aa>pa and ad>pd) cout<<"A"<<endl;
    else if(pa>aa and pd>ad) cout<<"P"<<endl;
    else cout<<"DRAW"<<endl;
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