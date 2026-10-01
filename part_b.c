#include <stdio.h>
#define N 8
#define SIZE 10

int hash(int key) { return key % SIZE; }

int hashSearch(int table[], int key, int *comparisons) {
    int index = hash(key), start = index;
    *comparisons = 0;
    while (table[index] != -1) {
        (*comparisons)++;
        if (table[index] == key) return index;
        index = (index + 1) % SIZE;
        if (index == start) break;
    }
    return -1;
}

int linearSearch(int a[], int n, int key, int *comparisons) {
    *comparisons = 0;
    for (int i=0;i<n;i++) {
        (*comparisons)++;
        if (a[i] == key) return i;
    }
    return -1;
}

int main() {
    int ids[N] = {105,210,315,420,525,630,735,840};
    int table[SIZE] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int final[SIZE] = {210,420,630,840,-1,105,315,525,735,-1};
    for (int i=0;i<SIZE;i++) table[i] = final[i];

    int search[] = {315,630,999};

    printf("PART B - SEARCH COMPARISON\n");
    for (int i=0;i<3;i++) {
        int hcomp, lcomp;
        int hp = hashSearch(table, search[i], &hcomp);
        int lp = linearSearch(ids, N, search[i], &lcomp);

        printf("\nSearch key: %d\n", search[i]);
        printf("Hashing: %s, comparisons = %d\n",
               hp == -1 ? "NOT FOUND" : "FOUND", hcomp);
        printf("Linear Search: %s, comparisons = %d\n",
               lp == -1 ? "NOT FOUND" : "FOUND", lcomp);
    }
    return 0;
}