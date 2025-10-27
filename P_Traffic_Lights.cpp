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
    int x,n;
    cin>>x>>n;
    set<int>s;
    s.insert(0);
    s.insert(x);
    multiset<int>ml;
    ml.insert(x);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        auto itr = s.upper_bound(a);
        auto itl = prev(itr);
        int l = *itl,r = *itr;
        int len = r-l;
        ml.erase(ml.find(len));
        ml.insert(a-l);
        ml.insert(r-a);

        s.insert(a);
        cout<<*ml.rbegin()<<" ";
    }
    cout<<endl;

return 0;
}