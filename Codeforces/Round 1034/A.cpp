#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if ((n-4) % 4|| n % 2)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}