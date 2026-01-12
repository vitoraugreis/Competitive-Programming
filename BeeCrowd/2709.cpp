/*
---------------------------------------------------------------
    2709 - As Moedas de Robbie
---------------------------------------------------------------
*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    float r = sqrt(n);
    for (int i = 2; i<=r; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int input;
    while(cin >> input) {
        int total = 0;
        stack<int> s;
        int n;
        for (int i = 1; i <= input; i++) {
            cin >> n;
            s.push(n);
        }

        int jump; cin >> jump;
        int count = 0;
        while (!s.empty()) {
            int top = s.top();
            s.pop();
            if (count == 0) total += top;
            count++;
            if (count == jump) count = 0;
        }
        
        if (isPrime(total)) cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        else cout << "Bad boy! I’ll hit you." << endl;
    }
   return 0; 
}
