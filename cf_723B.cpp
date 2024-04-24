#include <bits/stdc++.h>

#define pb push_back
#define el '\n'
#define F first
#define S second
#define pii pair<int,int>
#define mii map<int,int>
#define kaizhaha() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
const int maxN = 200005;
const int mod = 1e9 + 7;
//da chinh sua
//reset

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ok = 0;
    vector<int> v1, v2;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            ok = 1;
            if (cnt) v1.pb(cnt);
            cnt = 0;
        } else if (s[i] == ')') {
            ok = 0;
            if (cnt) v2.pb(cnt);
            cnt = 0;
        } else if (s[i] == '_') {
            if (ok && cnt) v2.pb(cnt);
            else if (cnt) v1.pb(cnt);
            cnt = 0;
        } else cnt++;
    }
    if (ok && cnt) v2.pb(cnt);
    else if (cnt) v1.pb(cnt);
    if (v1.empty()) cout << 0 << ' ';
    else cout << *max_element(v1.begin(), v1.end()) << ' ';
    if (v2.empty()) cout << 0;
    else cout << v2.size();
}

int main() {
    kaizhaha();
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}




