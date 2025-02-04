#include <iostream>
#include <vector>
using namespace std;

struct node {
    int val;
    node *left;
    node *right;
};
node *root=NULL;
// Check if a node is a leaf
bool isLeaf(node* n) {
    return (n != NULL && n->left == NULL && n->right == NULL);
}

node* create() {
    node *nd = new node();
    int x;
    cout << "Enter the x value and -1 for exit: ";
    cin >> x;
    if (x == -1) {
        delete nd; // Clean up the allocated node
        return NULL;
    }
    nd->val = x;
    cout << "Enter the left child for " << x << ": ";
    nd->left = create();
    cout << "Enter the right child for " << x << ": ";
    nd->right = create();
    return nd;
}

void inorderHelper(node *root, vector<int> &v) {
    if (root == NULL) {
        return;
    }
    inorderHelper(root->left, v);
    v.push_back(root->val);
    inorderHelper(root->right, v);
}

vector<int> inorder(node *root) {
    vector<int> v;
    inorderHelper(root, v);
    return v;
}

void addLeftBoundary(node* root, vector<int> &v3) {
    node *temp = root->left;
    while (temp) {
        if (!isLeaf(temp)) {
            v3.push_back(temp->val);
        }
        if (temp->left) {
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
}

void addRightBoundary(node *root, vector<int> &v3) {
    vector<int> temp;
    node *n = root->right;
    while (n) {
        if (!isLeaf(n)) {
            temp.push_back(n->val);
        }
        if (n->right) {
            n = n->right;
        } else {
            n = n->left;
        }
    }
    // Add right boundary nodes in reverse order
    for (int i = temp.size() - 1; i >= 0; --i) {
        v3.push_back(temp[i]);
    }
}

void addLeaves(node *root, vector<int>& v3) {
    if (isLeaf(root)) {
        v3.push_back(root->val);
        return;
    }
    if (root->left) {
        addLeaves(root->left, v3);
    }
    if (root->right) {
        addLeaves(root->right, v3);
    }
}

vector<int> printBoundary(node *root) {
    vector<int> v3;
    if (root == NULL) {
        return v3;
    }
    if (!isLeaf(root)) {
        v3.push_back(root->val);
    }
    addLeftBoundary(root, v3);
    addLeaves(root, v3);
    addRightBoundary(root, v3);
    return v3;
}

int main() {
    root = create();
    if (root == NULL) {
        cout << "No nodes in the tree." << endl;
        return 0;
    }

    vector<int> ans = printBoundary(root);
    cout << "Boundary elements: ";
    for (int value : ans) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}

