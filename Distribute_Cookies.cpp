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
    if(a>b or b==0){
        cout<<a-b<<endl;
        return;
    }
    if(a>b){
        int t=a%b;
        int t1 = a-t;
        int t2 = a-(b-t);
        if(a-t1 > a-t2) cout<<a-t2<<endl;
        else cout<<a-t1<<endl;
    }
    else{
        int t=b%a;
        int t1 = b-t;
        int t2 = b-(a-t);
        if(b-t1 > b-t2) cout<<b-t2<<endl;
        else cout<<b-t1<<endl;
    }
    
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