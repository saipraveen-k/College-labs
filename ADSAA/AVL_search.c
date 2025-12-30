#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

// Search function
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    // simple manual tree
    struct Node a = {20, NULL, NULL};
    struct Node b = {10, NULL, NULL};
    struct Node c = {30, NULL, NULL};

    a.left = &b;
    a.right = &c;

    int key = 10;

    if (search(&a, key))
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
