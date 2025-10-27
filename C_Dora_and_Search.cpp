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
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin>>v[i];
    
    int l=0,r=n-1,mn = 1, mx=n;
    while (l<=r)
    {
        if (r-l<2)
        {
            cout<<-1<<endl;
            return;
        }
        bool f= false;
        if (v[l]==mn)
        {
            l++;
            mn++;
            f=true;
        }
        else if (v[l]==mx)
        {
            l++;
            mx--;
            f=true;

        }
        
        if (!f)
        {
            if (v[r]==mn)
            {
                r--;
                mn++;
                f= true;
            }
            else if(v[r]==mx)
            {
               r--;
               mx--;
               f=true;
                
            }
            
        }
        if (!f)
        {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
    }
    cout<<-1<<endl;
    
}
int32_t main(){
    FastIO();
    int t;
    cin>>t;
    while (t--) sol();
    
    
    
return 0;
}