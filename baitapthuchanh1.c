#include <stdio.h>

#define MAX_N 100
#define MAX_VALUE 30000

int main() {
    int t, n, a[MAX_N], count[MAX_VALUE + 1];

    scanf("%d", &t); // S? b? test

    while (t--) {
        scanf("%d", &n); // S? ph?n t? c?a dãy

        // khoi tao mang dem
        
        
        
        for (int i = 0; i <= MAX_VALUE; i++) {
            count[i] = 0;
        }

        // dem so lan xuat hien cua moi so
        
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            count[a[i]]++;
        }

        // tim GCLN trong mang dem
        
        
        int maxCount = 0;
        for (int i = 1; i <= MAX_VALUE; i++) {
            if (count[i] > maxCount) {
                maxCount = count[i];
            }
        }

        //hien thi ra cac so xuat hien nhieu nhat
        
        
        printf("%d\n", maxCount);
        for (int i = 0; i < n; i++) {
            if (count[a[i]] == maxCount) {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }




    return 0;
    
    
    
    
}
