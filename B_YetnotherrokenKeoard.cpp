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
    for (int i = 0; i < n; i++)
    {
       string s;
       cin>>s;
       int n = s.length();
    
    int l = 0;
    int u = 0;
    vector<char> v;

    for (int i = n - 1; i >= 0; i--) {
        char ch = s[i];

        if (ch == 'b') {
            l++;
        } else if (ch == 'B') {
            u++;
        } else if (islower(ch)) {
            if (l > 0) {
                l--;
            } 
            else 
                v.push_back(ch);
            
        } else if (isupper(ch)) {
            if (u > 0) {
                u--;
            } 
            else 
                v.push_back(ch);
        }
    }
    reverse(v.begin(), v.end());
    for (char c : v) {
        cout << c;
    }
    cout << endl;
    }

return 0;
}