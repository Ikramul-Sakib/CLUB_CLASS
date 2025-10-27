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

void sol(){
    int n,m;
    cin>>n>>m;
    string s;
    cin >> s;
    set<int> st;
    for (int i = 0; i < m; ++i) {
        int idx;
        cin >> idx;
        st.insert(idx);
    }
    vector<int> v(st.begin(), st.end());
    int nu = v.size();
    string c;
    cin >> c;
    sort(c.begin(), c.end());
    for (int j = 0; j < nu; ++j) {
        int idx_0 = v[j] - 1;
        char c_a = c[j];
        
        s[idx_0] = c_a;
    }
    cout << s << endl;

}
int32_t main(){
    FastIO();
    int t;
    cin>>t;
    while (t--)sol();
    
return 0;
}