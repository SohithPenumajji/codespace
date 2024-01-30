#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b); // Sort in ascending order.
}

int main() {
    int N;
    scanf("%d", &N);
    int powers[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &powers[i]);
    }

    // Sort the powers in ascending order.
    qsort(powers, N, sizeof(int), compare);

    long long team1_power = 0;
    long long team2_power = 0;
    int turn = 0; // 0 represents Iron Man, 1 represents Captain America

    for (int i = N - 1; i >= 0; i--) {
        if (turn == 0) {
            team1_power += powers[i];
        } else {
            team2_power += powers[i];
        }
        turn ^= 1; // Toggle turn
    }

    long long difference = team1_power - team2_power;

    printf("%lld\n", difference);

    return 0;
}
