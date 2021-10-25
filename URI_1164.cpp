#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, X, sum;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> X;
        sum = 0;

        for(int j = 1; j < X; j++)
            sum = X % j == 0 ? sum + j: sum;

        cout << X << (sum == X ? " eh perfeito\n": " nao eh perfeito\n");
    }

    return 0;
}
