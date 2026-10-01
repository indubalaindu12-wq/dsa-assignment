#include <stdio.h>
#define SIZE 10

int hash(int key) { return key % SIZE; }

void display(int table[]) {
    printf("Index\tValue\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d\t%s\n", i, table[i] == -1 ? "EMPTY" : "");
    /* Values are printed separately below for clarity */
}

int main() {
    int ids[] = {105,210,315,420,525,630,735,840};
    int table[SIZE];

    for (int i=0;i<SIZE;i++) table[i] = -1;

    printf("PART A - HASH TABLE INSERTION\n");
    printf("Hash function: h(k) = k %% 10\n");
    printf("Collision resolution: Linear Probing\n\n");

    for (int i=0;i<8;i++) {
        int key = ids[i];
        int index = hash(key);
        printf("Insert %d: h(%d) = %d", key, key, index);

        while (table[index] != -1) {
            printf(" -> Collision at %d", index);
            index = (index + 1) % SIZE;
        }
        table[index] = key;
        printf(" -> Inserted at %d\n", index);

        printf("Table: ");
        for (int j=0;j<SIZE;j++)
            if (table[j] == -1) printf("[-] ");
            else printf("[%d] ", table[j]);
        printf("\n\n");
    }
    return 0;
}