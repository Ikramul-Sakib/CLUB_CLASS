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
    int n;
    cin>>n;
    map<int,int>mp;
    for (int i = 1; i < n+1; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    priority_queue<int>pq;
    for(auto [x,y]:mp){
        pq.push(y);
    }
    while (!pq.empty())
    {
        if (pq.size()<2) break;
       int x,y;
       x = pq.top();
       pq.pop();
       y = pq.top();
       pq.pop();
       x--;
       y--;
       if (x>0) pq.push(x);
       
       if (y>0)pq.push(y);
       
       
       
    }
    int ans = 0;
    while (!pq.empty())
    {
        ans+=pq.top();
        pq.pop();
    }
    
    
    cout<<ans<<endl;


}
int32_t main(){
    FastIO();
    int t;
    cin>>t;
    while (t--)    sol();
return 0;
}