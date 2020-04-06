#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

int n;
int arr[maxn];
void solve() {
    int ans = 0, cs = 0;
    for (int i = 0; i< n; i++) {
        if (arr[i] ^ 1) {
            cs++;
        }
        else {
            ans  = max(ans, cs);
            cs = 0;
        }
    }
    cout << ans << '\n';
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    solve();
    return 0;
}

