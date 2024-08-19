#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Level order traversal of binary tree
void levelOrderTraversal(Node *root) {
    if (root == nullptr) return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";

        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

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

    levelOrderTraversal(root);

    return 0;
}
