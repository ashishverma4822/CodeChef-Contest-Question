#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    int a,b;
    cin>>a>>b;
    int a1=a,b1=b;
    int a2=0,b2=0;
    while(a1>0){
        int t = a1%10;
        a2=a2*10+t;
        a1=a1/10;
        t=b1%10;
        b2=b2*10+t;
        b1=b1/10;
    }
    if(a>b or a>b2 or a2>b or a2>b2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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