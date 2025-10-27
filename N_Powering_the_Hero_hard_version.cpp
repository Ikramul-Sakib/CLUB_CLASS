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
    priority_queue<int>p;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if (x>0)    p.push(x);
        
        else{
            if (!p.empty())
            {
                int b = p.top();
                p.pop();
                ans+=b;

            }
        }

    }
    cout<<ans<<endl;
}
int32_t main(){
    FastIO();
    int t;
    cin>>t;
    while (t--)sol();
    
    
    
return 0;
}