#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod (ll)1e9 + 7

const ll n = 1000002;
vector<ll> primes;
vector<ll> spf(n, 0);

void sieve();
void computeResult();

void helpMe() {
    static bool flag = false;
    if (!flag) {
        sieve();
        for (ll i = 2; i < n; i++) {
            if (spf[i] == i) primes.push_back(i);
        }
        flag = true;
    }
    computeResult();
}

void computeResult() {
    ll k;
    cin >> k;
    ll result = 0;
    ll limit = (spf[k] == k) ? k : spf[k];
    for (ll prime : primes) {
        if (prime > limit) break;
        result += prime * k;
    }
    cout << result << endl;
}

void sieve() {
    spf[1] = 1;
    for (ll i = 2; i < n; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            for (ll j = i * i; j < n; j += i) {
                if (spf[j] == 0) {
                    spf[j] = i;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool testcase = true;
    ll test;
    if (testcase) {
        cin >> test;
        while (test--) {
            helpMe();
        }
    } else {
        helpMe();
    }
    return 0;
}
