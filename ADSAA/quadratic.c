#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

void init() {
    for(int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

void insert(int key) {
    int index = key % SIZE;
    int i = 0;

    while(hashTable[(index + i*i) % SIZE] != -1) {
        i++;
        if(i == SIZE) {
            printf("Hash table is full\n");
            return;
        }
    }

    hashTable[(index + i*i) % SIZE] = key;
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
