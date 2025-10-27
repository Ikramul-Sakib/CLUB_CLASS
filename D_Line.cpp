//@handle Ikramul Hassan
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
using namespace std;
#define int long long
#define pb push_back
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fl(a, b) for (int i = a; i < b; i++)
#define flj(a, b) for (int j = a; j< b; j++)
#define fll(a) for (auto &i : a)
#define ssort(a) sort(a.begin(), a.end())
#define ssortf(a, x) sort(a.begin(), a.end(), x)
#define rvs(a) reverse(a.begin(), a.end())
#define all(a) (a).begin(), (a).end()
#define el cout << "\n"
#define endl "\n"
#define sz(a) a.size()
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int val = 0;
    vector<int> v; 
    for (int i = 0; i < n; i++) {
        int cc,oc;
        oc = max((int)i, (int)n - 1 - i);
        if (s[i] == 'L') cc = i;
        
        else  cc = n - 1 - i;
        
        val += cc;
        int gain = oc - cc;
        if (gain > 0) v.push_back(gain);
        
    }
    sort(v.rbegin(), v.rend());
    vector<int> r;
    int max_val = val;
    int q = 0;
    int p = v.size();

    for (int k = 1; k <= n; k++) {

        if (k - 1 < p) q += v[k - 1];
        r.push_back(val + q);
    }

    for (int i = 0; i < n; i++) {
        cout << r[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int32_t main(){
    FastIO();
     int t;
    cin >> t;
    while (t--) solve();
return 0;
}