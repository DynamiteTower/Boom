#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node* left;
struct Node* right;
};

void preorderTraversal(struct Node* root) {

if (root == NULL)
return;

printf("%d ", root->data);
preorderTraversal(root->left);
preorderTraversal(root->right);

}

struct Node* newNode(int data) {

struct Node* node = (struct Node*)malloc(sizeof(struct Node));

node->data = data;
node->left = NULL;
node->right = NULL;
return node;

}

int main() {

struct Node* root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);

preorderTraversal(root);
return 0;

}
