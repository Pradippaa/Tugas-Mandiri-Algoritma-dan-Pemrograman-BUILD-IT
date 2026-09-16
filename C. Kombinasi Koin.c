#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long count = 0;
    long long MOD = 1000000007;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] != arr[j]) {
                count++;
                if (count >= MOD) count -= MOD;
            }
        }
    }

    printf("%lld\n", count % MOD);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}