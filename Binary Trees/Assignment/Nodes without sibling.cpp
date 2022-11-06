// For a given Binary Tree of type integer, print all the nodes without any siblings.

// Sample Input 1:
// 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
// Sample Output 1:
// 9    
  
// Sample Input 2:
// 2 4 5 6 -1 -1 7 20 30 80 90 -1 -1 -1 -1 -1 -1 -1 -1
// Sample Output 2:
// 6 7  

void printNodesWithoutSibling(BinaryTreeNode<int> *root){
    
    if (root == NULL) return;

    if (root->left != NULL && root->right == NULL)
        cout << root->left->data << " ";
    else if (root->left == NULL && root->right != NULL)
        cout << root->right->data << " ";

    printNodesWithoutSibling(root->left);
    printNodesWithoutSibling(root->right);
}

/*
#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include "solution.h"

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    printNodesWithoutSibling(root);
}
*/
