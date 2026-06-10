#include <stdio.h>

int josephus(int n, int k) {
    int pos = 0;
    for (int i = 2; i <= n; i++) {
        pos = (pos + k) % i;
    }
    return pos + 1;
}

int main() {
    int NC;
    if (scanf("%d", &NC) != 1) return 0;

    for (int i = 1; i <= NC; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int sobrevivente = josephus(n, k);
        printf("Case %d: %d\n", i, sobrevivente);
    }

    return 0;
}
