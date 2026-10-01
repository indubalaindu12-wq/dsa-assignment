#include <stdio.h>
int main() {
    int n = 8, m = 10;
    double alpha = (double)n / m;

    printf("PART C - ANALYSIS\n");
    printf("Number of keys (n) = %d\n", n);
    printf("Table size (m) = %d\n", m);
    printf("Load factor = n/m = %.2f (80%%)\n", alpha);
    printf("Hashing average-case search: O(1) expected\n");
    printf("Hashing worst-case search: O(n)\n");
    printf("Linear search average/worst-case: O(n)\n");
    printf("Hash table extra space: O(m)\n");
    printf("Linear search extra space: O(1)\n");
    return 0;
}