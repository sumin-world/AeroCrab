#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long long price;
    long long value;
} Gift;

static int compare_gift_price(const void* a, const void* b) {
    const Gift* gift_a = (const Gift*)a;
    const Gift* gift_b = (const Gift*)b;
    if (gift_a->price < gift_b->price) return -1;
    if (gift_a->price > gift_b->price) return 1;
    return 0;
}

int main() {
    int N;
    long long D;
    scanf("%d %lld", &N, &D);
    
    Gift* gifts = (Gift*)malloc(N * sizeof(Gift));
    if (gifts == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < N; i++) {
        scanf("%lld %lld", &gifts[i].price, &gifts[i].value);
    }

    qsort(gifts, N, sizeof(Gift), compare_gift_price);

    long long max_value = 0;
    long long current_value = 0;
    int left = 0;

    for (int right = 0; right < N; right++) {
        current_value += gifts[right].value;

        while (gifts[right].price - gifts[left].price >= D) {
            current_value -= gifts[left].value;
            left++;
        }

        if (current_value > max_value) {
            max_value = current_value;
        }
    }
    
    printf("%lld\n", max_value);
    free(gifts);
    return 0;
}
