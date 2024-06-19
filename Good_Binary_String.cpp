#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (int)1e9 + 7

// code is written by @vashishk0602
void helpMe()
{
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool flag = true;
        for (int i = 0; i < n; i += 2) {
            if (s[i] != s[i + 1]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << 0 << endl;
            return;
        }

        vector<int> a, b;
        int c = 0;
        for (int i = 0; i < n; i += 2) {
            char ch1 = s[i], ch2 = s[i + 1];
            if (ch1 == ch2) continue;
            if ((ch1 - '0') == c) {
                a.push_back(i);
                c = 1 - c;
            } else if ((ch2 - '0') == c) {
                a.push_back(i + 1);
                c = 1 - c;
            }
        }

        flag = true;
        string temp = s;
        for (int idx : a) {
            temp[idx] = (flag = !flag) ? '0' : '1';
        }
        for (int i = 0; i < n; i += 2) {
            if (temp[i] != temp[i + 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << a.size() << endl;
            for (int idx : a) {
                cout << idx + 1 << " ";
            }
            cout << endl;
            return;
        }

        c = 1;
        for (int i = 0; i < n; i += 2) {
            char ch1 = s[i], ch2 = s[i + 1];
            if (ch1 == ch2) continue;
            if ((ch1 - '0') == c) {
                b.push_back(i);
                c = 1 - c;
            } else if ((ch2 - '0') == c) {
                b.push_back(i + 1);
                c = 1 - c;
            }
        }

        flag = true;
        temp = s;
        for (int idx : b) {
            temp[idx] = (flag = !flag) ? '1' : '0';
        }
        for (int i = 0; i < n; i += 2) {
            if (temp[i] != temp[i + 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << b.size() << endl;
            for (int idx : b) {
                cout << idx + 1 << " ";
            }
            cout << endl;
            return;
        }
        cout << -1 << endl;
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