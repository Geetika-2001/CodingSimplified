// Author : Vikram D Singh
#include <bits/stdc++.h>
using namespace std;
// Making Node for tree using struct
struct Node
{
    int data;
    Node *left;  // pointer to left subtree
    Node *right; // pointer to right subtree
    Node(int x)  // Constructor
    {
        data = x;
        left = right = NULL;
    }
};
int max_height(Node *root)
{
    if (root == NULL) // Base Case for recursion
        return 0;
    int lh = max_height(root->left);
    if (lh == -1)
        return -1;
    int rh = max_height(root->right);
    if (rh == -1)
        return -1;
    if (abs(lh - rh) > 1) // if the difference in height of lefttree(lh) and righttree(rh) is greater than 1, then return -1
        return -1;
    return (1 + max(lh, rh));
}
bool check(Node *root) // Boolean  function which returns true when tree is balanced else it returns false
{
    int height = max_height(root);
    return height != -1;
}
int main()
{
    //Adding test case nodes
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    if (check(root))
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}