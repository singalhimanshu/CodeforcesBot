#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define maxn 1e6

int n, m, a, b;
void solve() {
    int ans1 = n * a;
    if (m >= n && b <= ans1) {
        cout << b << '\n';
        return;
    }
    if (n % m == 0) {
        cout << min(ans1, (n / m) * b) << '\n';
        return;
    }
    int ans2 = (n / m) * b;
    int ans3 = ceil(n / (double)m) * b;
    ans1 = min(ans1, ans3);
    n -= (n / m) * m;
    ans2 += n * a;
    cout << min(ans1, ans2);
}

int main() {
    cin >> n >> m >> a >> b;
    solve();
    return 0;
}

