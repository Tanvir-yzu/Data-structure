#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

bool isPalindrome(Node* head) {
    Node* start = head;
    Node* end = head;
    
    while (end->next != NULL) {
        end = end->next;
    }
    
    while (start != end && start->prev != end) {
        if (start->data != end->data) {
            return false;
        }
        start = start->next;
        end = end->prev;
    }
    
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    
    while (cin >> val && val != -1) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        newNode->prev = tail;
        
        if (tail != NULL) {
            tail->next = newNode;
        }
        
        tail = newNode;
        
        if (head == NULL) {
            head = newNode;
        }
    }
    
    if (isPalindrome(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}