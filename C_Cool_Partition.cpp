#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return;

    vector<int> a(n);
    map<int, int> last_occurrence;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        last_occurrence[a[i]] = i + 1;
    }

    int max_segments = 0;
    int current_start = 1; 
    int min_last_index = n + 1; 

    for (int R = 1; R <= n; ++R) {
        min_last_index = min(min_last_index, last_occurrence[a[R-1]]); // a[R-1] is 0-based
        if (min_last_index > R) {
            max_segments++;
            current_start = R + 1;
            min_last_index = n + 1; 
        }
    }
    cout << max_segments << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) 
        solve();
    

    return 0;
}