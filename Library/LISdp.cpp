#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

int n;
vector<int> arr(maxn);

int lis() {
    vector<int> lrr(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) 
            if (arr[j] < arr[i]) 
                lrr[i] = max(lrr[i], lrr[j] + 1);
    }
    return *max_element(lrr.begin(), lrr.end());
}
void solve() {
    int lisAns = lis();
    cout << lisAns;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    solve();
    return 0;
}

