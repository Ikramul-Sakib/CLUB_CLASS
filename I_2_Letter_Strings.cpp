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
    long long n;
    cin>>n;
    
    vector<pair<char,char>>v(n);
    
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        
        v[i].first=s[0];
        v[i].second=s[1];
    }
    
if (n==1)
{
    cout<<0<<endl;
    return;
}

    long long c = 0;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = i+1; j < n; j++)
        {
            if (v[i]==v[j])
            {
                continue;
            }
            else if (v[i].first==v[j].second)
            {
                 if (v[i].second!=v[j].first)
                
                    c++;
                  
           }
           else if (v[i].first==v[j].first)
           {
                 if (v[i].second!=v[j].second)
                
                    c++;
                  
           }
            else if (v[i].second==v[j].first)
           {
                 if (v[i].first!=v[j].second)
                
                    c++;
                  
           }
           else if (v[i].second==v[j].second)
           {
                 if (v[i].first!=v[j].first)
                
                    c++;
                
           }
           else continue;    
           
        }
        
    }
    cout<<c<<endl;

}
int32_t main(){
    FastIO();
    int t;
    cin>>t;
    while (t--)sol();
return 0;
}