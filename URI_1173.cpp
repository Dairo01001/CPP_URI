#include <bits/stdc++.h>

using namespace std;

int main() {
    int v;
    cin >> v;

    for(int i = 0; i < 10; i++) {
        cout << "N[" << i << "] = " << v << "\n";
        v = v * 2;
    }

    return 0;
}
