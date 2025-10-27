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
     int n;
     cin>>n;
    string s;
    cin >> s;

    map<string, int> mp;
    for (int i = 0; i < n - 1; i++) {
        string c = s.substr(i, 2);
        mp[c]++;
    }
    int m = -1;
    string a = "";
    for (const auto& p : mp) {
        if (p.second > m) {
            m = p.second;
            a = p.first;
        }
    }
    cout << a << endl;
    
return 0;
}