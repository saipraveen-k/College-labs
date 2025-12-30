#include <stdio.h>
#define SIZE 10
#define R 7   // prime number less than SIZE

int hashTable[SIZE];

void init() {
    for(int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

int hash1(int key) {
    return key % SIZE;
}

int hash2(int key) {
    return R - (key % R);
}

void insert(int key) {
    int index = hash1(key);
    int step = hash2(key);
    int i = 0;

    while(hashTable[(index + i * step) % SIZE] != -1) {
        i++;
        if(i == SIZE) {
            printf("Hash table is full\n");
            return;
        }
    }

    hashTable[(index + i * step) % SIZE] = key;
}

void display() {
    printf("\nHash Table:\n");
    for(int i = 0; i < SIZE; i++)
        printf("%d --> %d\n", i, hashTable[i]);
}

int main() {
    int keys[] = {23, 43, 13, 27, 39};
    int n = 5;

    init();

    for(int i = 0; i < n; i++)
        insert(keys[i]);

    display();
    return 0;
}
