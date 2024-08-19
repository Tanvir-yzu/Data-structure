#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;

    if (val == -1) {
        return NULL;
    } else {
        root = new Node(val);
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            p->left = new Node(l);
            q.push(p->left);
        }

        if (r != -1) {
            p->right = new Node(r);
            q.push(p->right);
        }
    }

    return root;
}

int maxHeight(Node* root) {
    if (root == NULL)
        return 0;
    return 1 + max(maxHeight(root->left), maxHeight(root->right));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* root = input_tree();
    cout << maxHeight(root) << endl;

    return 0;
}
