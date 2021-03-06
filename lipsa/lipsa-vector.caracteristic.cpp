/**
    Problema: lipsa
    Solutie: Calcularea numarului lipsa din sir se face prin utilizarea unui vector caracteristic.
    Complexitate: O(M * N + M log M)
    Autor: Robert Hasna
 */
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int N, M; // Numerele din enunt
vector<int> v; // Stocheaza cele N-1 numere
vector<int> numereLipsa; // Stocheaza frecventa numerelor lipsa din sirurile de intrare

int main() {
    freopen("lipsa.in", "r", stdin);
    freopen("lipsa.out", "w", stdout);

    scanf("%d %d\n", &N, &M);
    numereLipsa.reserve(M+1);

    // Pentru fiecare linie, cautam care e numarul care lipseste
    while (M-- > 0) {
        v.clear();
        v.assign(N + 1, 0);

        // Citire din fisier
        for (int j = 0, x; j < N - 1; ++j) {
            scanf("%d ", &x);
            v[x] = 1;
        }

        // Determinam care dintre numere lipseste
        for (int j = 1; j <= N; ++j) {
            if (v[j] == 0) {
                numereLipsa.push_back(j);
                break;
            }
        }
    }

    // Calculam de cate ori lipseste un numar cel mai mult, si cate astfel de numere exista ( X si Y din enunt )
    sort(numereLipsa.begin(), numereLipsa.end());

    int maxim = -1, numarDeMaxime = 0, curent = 0, valoare = 0;
    for (int i = 0; i < numereLipsa.size(); ++i) {
        if (numereLipsa[i] != valoare) {
            valoare = numereLipsa[i];
            curent = 1;
        } else {
            curent++;
        }
        
        if (curent > maxim) {
            maxim = curent;
            numarDeMaxime = 1;
        }
        
        if (curent == maxim) {
            numarDeMaxime++;
        }
    }

    // Afisarea rezultatului
    printf("%d %d\n", maxim, numarDeMaxime-1);
    curent = valoare = 0;
    for (int i = 0; i < numereLipsa.size(); ++i) {
        if (numereLipsa[i] == valoare) {
            curent++;
        } else {
            valoare = numereLipsa[i];
            curent = 1;
        }

        if (curent == maxim) {
            printf("%d ", valoare);
        }
    }

    printf("\n");

    return 0;
}
