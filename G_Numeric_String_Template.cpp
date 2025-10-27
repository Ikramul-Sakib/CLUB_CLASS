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

string chk(const vector<int>& a, const string& s) {
    int n = a.size();
    int m = s.length();

    if (n != m) 
         return "NO";
    

    map<int, char> nc;

    map<char, int> cn;

    for (int i = 0; i < n; i++) {
        int sum = a[i];
        char ch = s[i];

        auto it = nc.find(sum);
        if (it != nc.end()) {
            if (it->second != ch) 
                return "NO";
            
        } else 
            nc[sum] = ch;
        

        auto iteret = cn.find(ch);
        if (iteret != cn.end()) {
            if (iteret->second != sum) 
                    return "NO";
            
        } else 
            cn[ch] = sum;
        
    }

    return "YES";
}


void sol() {
    int n;
    cin>>n;

    vector<int> a(n);   
    for (int i = 0; i < n; i++) 
        cin >> a[i]; 
    
    int m;
    cin >> m; 
    for (int j = 0; j < m; j++) {
        string s;
        cin >> s; 
        cout << chk(a, s) << endl;
    }
}
int32_t main(){
    FastIO();
    int t;
    cin>>t;
    while (t--)  sol();
    
return 0;
}