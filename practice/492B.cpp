#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;
int n;
ll l;
double arr[maxn];
void solve() {
    sort(arr, arr+n);       
    double ans = arr[0];
    for (int i = 1; i < n; i++) {
        ans = max(ans, (arr[i] - arr[i - 1]) / 2);
    }
    ans = max(ans, (l - arr[n - 1]));
    cout << sp(ans, 10);
}

int main() {
    cin >> n >> l;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    solve();
    return 0;
}

