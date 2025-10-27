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
void solve(){
    int n,a=3;
    cin>>n;
    map<string,vector<int>>mp;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            string s;
            cin>>s;
            mp[s].push_back(i);
        }
        
    }
    vector<int>v(a+1);
    for(auto [x,y]:mp){
        vector<int>m = y;
        if (m.size()==1) 
        {
            v[m[0]]+=3;
        }
        if (m.size()==2)
        {
            v[m[0]]++;
            v[m[1]]++;
            
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        cout<<v[i]<<" ";
    }
    

    cout<<endl;


}
int32_t main(){
    FastIO();
    int t;
    cin>>t;
    while (t--) solve();
return 0;
}