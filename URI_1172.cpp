#include <bits/stdc++.h>

using namespace std;

int main() {
    int x[10], i;

    for (i = 0; i < 10; i++) {
        cin >> x[i];
        x[i] = x[i] < 1? 1 : x[i];
    }

    for(i = 0; i < 10; i++)
        cout << "X[" << i << "] = " << x[i] << '\n';

    return 0;
}
