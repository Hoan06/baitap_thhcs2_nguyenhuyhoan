#include<stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    
    
    return a;
    
    
}


// khai bao ham s
int main() {
    int t, n, a[1001], b[1001];
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        b[0] = a[0];
        for (int i = 1; i < n; i++) {
            b[i] = (a[i] * b[i - 1]) / gcd(a[i], b[i - 1]);
        }

        for (int i = 0; i <= n; i++) {
            printf("%d ", b[i]);
        }
        printf("\n");
    }




    return 0;
    
    
    
}
