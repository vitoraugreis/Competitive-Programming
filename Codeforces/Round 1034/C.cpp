#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vet(n);
    vector<vector<int>> s(n);

    for (int i = 0; i<n; i++) {
        int a; cin >> a;
        vet[i] = a;
        
        if (i == 0)
            s[0].push_back(vet[0]);
        else
            s[i].push_back(min(a, s[i-1][0]));
    }

    s[n-1].push_back(vet[n-1]);
    for (int i = n-2; i >= 0; i--) {
        s[i].push_back(max(vet[i], s[i+1][1]));
    }

    for (int i = 0; i<n; i++) {
        cout << (vet[i] == s[i][0] || vet[i] == s[i][1]) ? 1 : 0;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
    
}