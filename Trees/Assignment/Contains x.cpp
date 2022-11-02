// Given a generic tree and an integer x, check if x is present in the given tree or not. 
// Return true if x is present, return false otherwise.
  
// Sample Input 1 :
// 10 3 20 30 40 2 40 50 0 0 0 0
// 40 
// Sample Output 1 :
// true
  
// Sample Input 2 :
// 10 3 20 30 40 2 40 50 0 0 0 0
// 4 
// Sample Output 2:
// false

bool isPresent(TreeNode<int>* root, int x) {

    if(root->data==x) return true;

   bool ans=false;
    for(int i=0;i<root->children.size();i++)
    {
        bool smallans=isPresent(root->children[i],x);
        if(smallans!=ans && smallans==true)
            ans=smallans;
    }
    
   return ans;
}

/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

#include "solution.h"

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();
    int x;
    cin >> x;
    cout << (isPresent(root, x) ? "true" : "false");
}
*/
