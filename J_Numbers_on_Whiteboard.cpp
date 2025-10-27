//@handle Ikramul Hassan
#include <iostream>
#include <string>
#include <cmath>
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
    int n;
    cin>>n;
    priority_queue<int>p;
    for (int i = 1; i <= n; i++)
    {
        p.push(i);
    }

    vector<pair<int,int>>v(n-1);
 
    for (int i = 0; i <= n-2; i++)
    {
        int a,b;
        a = p.top();
        p.pop();
        b = p.top();

        int c = (a+b+1)/2;

        p.pop();
        v[i].first = a;
        v[i].second = b;
        p.push(c);
    }
    
    cout<<p.top()<<endl;
    for(auto i : v){
        cout<<i.first<<" "<<i.second<<endl;
    }




}
int32_t main(){
    FastIO();
    int t;
    cin>>t;
    while (t--)
    {
        sol();
    }
    
    
return 0;
}