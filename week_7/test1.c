#include<stdio.h>
#include<stdlib.h>

struct tnode {
    int data;
    struct tnode* left;
    struct tnode* right;
};

struct tnode* newNode(int data) {
    struct tnode* node = malloc(sizeof(struct tnode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void posttraversal(struct tnode* root) {
    if (root == NULL) {
        return;
    }
    posttraversal(root->left);
    posttraversal(root->right);
    printf("%d ", root->data);
}

void pretraversal(struct tnode* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    pretraversal(root->left);
    pretraversal(root->right);
}

void intraversal(struct tnode* root) {
    if (root == NULL) {
        return;
    }
    intraversal(root->left);
    printf("%d ", root->data);
    intraversal(root->right);
}

int main() {
    struct tnode* root = newNode(45);
    root->left = newNode(19);
    root->right = newNode(56);
    root->left->left = newNode(12);
    root->left->left->left = newNode(10);
    root->left->right = newNode(34);
    root->left->right->left = newNode(32);
    root->right->left = newNode(54);
    root->right->right = newNode(78);
    root->right->right->left = newNode(67);
    root->right->right->right = newNode(89);
    root->right->right->right->left = newNode(81);

    printf("Post Traversal:\n");
    posttraversal(root);
    printf("\n\nPre Traversal:\n");
    pretraversal(root);
    printf("\n\nInorder Traversal:\n");
    intraversal(root);

    return 0;
}
