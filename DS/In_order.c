#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node *left, *right;
};

void printInorder(struct Node* node) {

if (node == NULL)
return;

printInorder(node->left);
printf("%d ", node->data);
printInorder(node->right);

}

struct Node* newNode(int v) {

struct Node* node = (struct Node*)malloc(sizeof(struct Node));

node->data = v;
node->left = node->right = NULL;
return node;

}

int main() {

struct Node* root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);
root->right->right = newNode(6);

printf("Inorder traversal of binary tree is: \n");
printInorder(root);

return 0;
}
