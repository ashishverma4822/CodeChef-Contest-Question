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
    for (int i=1;i<=n;i++) {
        cout<<i<<" ";
    }
    cout<<endl;
    int d=n/2;
    if(n%2==0){
        for(int i=1;i<n;i++){
            cout<<(((i+d)>n)?(i-d):(i+d))<<" ";
        }
    }else{
        cout<<n<<" ";
        for(int i=2;i<n;i++){
            cout<<((i+d>n-1)?(i-d):(i+d))<<" ";
        }
    }
    if(n!=1) cout<<n-d<< endl;
    else cout << endl;
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