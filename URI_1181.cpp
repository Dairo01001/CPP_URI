#include <bits/stdc++.h>

using namespace std;

int main() {
    float M[12 * 12], sum;
    int L;
    char T;

    cin >> L;
    cin >> T;

    for(int i = 0; i < 12 * 12; i++)
        cin >> M[i];

    for (int i = L * 12; i < (L * 12) + 12; i++)
        sum += M[i];

    cout << (T == 'S'? sum: sum / 12) << endl;

    return 0;
}
