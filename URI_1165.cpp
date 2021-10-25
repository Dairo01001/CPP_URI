#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if(n == 0 || n == 1 || n == 4) return false;
    for(int i = 2; i < n / 2; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        cout << x << (isPrime(x) ? " eh primo": " nao eh primo");
        cout << endl;
    }

    return 0;
}


