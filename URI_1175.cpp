#include <bits/stdc++.h>

using namespace std;

int main() {
    int N[21], i, aux, last;

    for(i = 1; i < 21; i++)
        cin >> N[i];

    // Igual a imprimir al reves
    last = 20;
    for(i = 1; i < 11; i++) {
        aux = N[i];
        N[i] = N[last];
        N[last] = aux;
        last--;
    }

    for (i = 1; i < 21; i++)
        cout << "N[" << i - 1 << "] = " << N[i] << endl;

    return 0;
}
