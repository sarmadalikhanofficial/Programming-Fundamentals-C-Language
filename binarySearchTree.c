#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node *left, *right;
};

struct Node* newNode(int key) {
    struct Node* node = malloc(sizeof(struct Node));
    return node->key = key, node->left = node->right = NULL, node;
}

struct Node* insert(struct Node* node, int key) {
    if (!node) return newNode(key);
    if (key < node->key) node->left = insert(node->left, key);
    else node->right = insert(node->right, key);
    return node;
}

void inorder(struct Node* root) {
    if (root) inorder(root->left), printf("%d ", root->key), inorder(root->right);
}

int main() {
    struct Node* root = NULL;
    int keys[] = {50, 30, 20, 40, 70, 60, 80};
    for (int i = 0; i < 7; i++) root = insert(root, keys[i]);
    inorder(root);
}
