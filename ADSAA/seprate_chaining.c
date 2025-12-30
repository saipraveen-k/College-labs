#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Node structure
struct node {
    int data;
    struct node *next;
};

struct node *hashTable[SIZE];

// Initialize hash table
void init() {
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = NULL;
}

// Insert using separate chaining
void insert(int key) {
    int index = key % SIZE;

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = key;
    newNode->next = hashTable[index];

    hashTable[index] = newNode;
    printf("Inserted %d at index %d\n", key, index);
}

// Display hash table
void display() {
    for (int i = 0; i < SIZE; i++) {
        struct node *temp = hashTable[i];
        printf("%d : ", i);
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int choice, key;
    init();

    while (1) {
        printf("\n--- Separate Chaining Menu ---\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(key);
                break;

            case 2:
                display();
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
}
