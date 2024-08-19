#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void input_tree(Node*& root) {
    int val;
    cin >> val;

    // Check if the root should be NULL
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;
    if (root) q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        int left_val, right_val;
        cin >> left_val >> right_val;

        Node *left_node = NULL, *right_node = NULL;

        // Create left child if it's not -1
        if (left_val != -1)
            left_node = new Node(left_val);

        // Create right child if it's not -1
        if (right_val != -1)
            right_node = new Node(right_val);

        // Attach the left and right children to the current node
        temp->left = left_node;
        temp->right = right_node;

        // Push the left and right children to the queue if they exist
        if (left_node) q.push(left_node);
        if (right_node) q.push(right_node);
    }
}

void print_tree(Node* root) {
    if (root == NULL) {
        cout << "Tree is empty." << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->val << " ";

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* root = NULL;
    input_tree(root);

    // Print the tree to verify the input
    print_tree(root);

    return 0;
}
