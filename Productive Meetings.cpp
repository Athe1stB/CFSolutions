#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
#define sz(v) ((int)v.size())
#define endl "\n"
#define rep(i,j,n) for(int i=j;i<n;i++)
#define pre(i,j,n) for(int i=j;i>=n;i--)
#define br "\n"
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define pii pair<int,int>
#define deba(a...) cout<<endl;cout<<#a<<": ";for(auto it:a)cout<<it<<" ";cout<<endl;
const int N = 1e6 + 1;
const int mod = 1e9 + 7;
int power(int x, int n) {int res = 1; x %= mod; while (n) {if (n & 1)res = (res * x) % mod; x = (x * x) % mod; n >>= 1;} return res;}
 
void solve() {
    int n = 0, a = 0, b = 0, c = 0, k = 0;
    cin >> n;
    vector<pii> v(n);
    rep(i, 0, n) {cin >> v[i].ff; v[i].ss = i + 1;}
    vector<vi> ans;
    priority_queue<pii> pq;
    rep(i, 0, n)pq.push(v[i]);
    while (pq.size() >= 2) {
        pii a = pq.top(); pq.pop();
        pii b = pq.top(); pq.pop();
        if (b.ff > 0)
            ans.push_back({a.ss, b.ss});
        a.ff -= 1;
        b.ff -= 1;
        if (a.ff > 0)pq.push(a);
        if (b.ff > 0)pq.push(b);
    }
    // cout << "ans :  for " << n << endl;;
    cout << ans.size() << endl;
    for (auto i : ans) {sort(all(i)); for (auto j : i)cout << j << " "; cout << endl;}
}
 
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
