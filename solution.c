#include <stdio.h>

int possibleMultiset(int animals[], int N) {
    int count[101] = {0};

    for (int i = 0; i < N; i++) {
        count[animals[i]]++;
    }

    for (int i = 1; i <= 100; i++) {
        if (count[i] % 2 != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int animals[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &animals[i]);
        }

        int result = possibleMultiset(animals, N);
        if (result) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
