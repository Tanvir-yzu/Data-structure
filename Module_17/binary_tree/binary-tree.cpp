#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrderTraversal(Node* node) {
    if (node == NULL) return;

    cout << node->val << " "; // Visit current node
    preOrderTraversal(node->left); // Visit left child
    preOrderTraversal(node->right); // Visit right child
}

void postOrderTraversal(Node* node) {
    if (node == NULL) return;
    postOrderTraversal(node->left); 
    postOrderTraversal(node->right); 
    cout << node->val << " ";
}

void inOrderTraversal(Node* node) {
    if (node == NULL) return;
    inOrderTraversal(node->left); 
    cout << node->val << " ";
    inOrderTraversal(node->right); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    d->left = f;
    d->right = g;
    h->right = i;

    // preOrderTraversal(root);
    // postOrderTraversal(root);
    inOrderTraversal(root); // Outputs: 20 40 60 80 10

    return 0;
}