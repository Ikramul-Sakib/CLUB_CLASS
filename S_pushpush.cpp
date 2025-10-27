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
    cin >> n;
    deque<int> d;
    bool f = false;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        if (f) {
            d.push_front(a);
        } else 
            d.push_back(a);
        f = !f;
    }
    vector<int> v(n);
    if (f) {
        copy(d.rbegin(), d.rend(), v.begin());
    } else {
        copy(d.begin(), d.end(), v.begin());
    }
    for (int i = 0; i < n; ++i) 
        cout << v[i] << " ";
    cout << endl;
    
    


    
return 0;
}
