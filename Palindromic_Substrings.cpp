#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(n==1){
        cout<<"Bob"<<endl;
        return;
    }
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0') zero++;
        else one++;
    }
    if(zero%2==0) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
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