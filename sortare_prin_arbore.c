#include <stdio.h>
#include <stdlib.h>
// sortare folosind arbore binar de cautare

typedef struct bst_node {
    int val;
    struct bst_node *left;
    struct bst_node *right;
}bst_node_t;

bst_node_t* newNode(int val) {
    bst_node_t *nou = malloc(sizeof(bst_node_t));
    nou->val = val;
    nou->left = NULL;
    nou->right = NULL;
    return nou;
}

bst_node_t *insert(bst_node_t *node, int val) {
    if(node == NULL) {
        return newNode(val);
    }
    if(val < node->val) {
        node->left = insert(node->left, val);
    } else if(val > node->val) {
        node->right = insert(node->right, val);
    }
    return node;
}

void inorder(bst_node_t *root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->val);
        inorder(root->right);
    }
}

int main() {

    bst_node_t *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    // print inoder traversal of the BST
    inorder(root);
}