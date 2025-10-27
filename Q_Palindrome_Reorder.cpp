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



    
 
int32_t main(){
    FastIO();
    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (char c : s) {
        v[c - 'A']++;
    }
    int o = 0;
    string m = ""; 
    for (int i = 0; i < 26; ++i) {
        if (v[i] % 2 != 0) {
            o++;
            m = (char)('A' + i);
        }
    }
    if (o > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    string f = "";
    for (int i = 0; i < 26; ++i) {
        int n = v[i] / 2;
        if (n > 0) {
            f.append(n, (char)('A' + i));
        }
    }
    string fh = f;
    reverse(fh.begin(), fh.end());
    cout << f << m << fh << "\n";

    


return 0;
}