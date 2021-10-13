#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
    void preInPostTraversal(Node *root);
    // vector<int> preInPostTraversal(Node *root);
};

void Node::preInPostTraversal(Node *root)
{
    stack<pair<Node *, int>> st;
    st.push({root, 1});
    vector<int> pre, in, post;
    if (root == NULL)
    {
        return;
    }
    else
    {
        while (!st.empty())
        {
            pair<Node *, int> current = st.top();
            st.pop();
            if (current.second == 1)
            {
                pre.push_back(current.first->data);
                current.second++;
                st.push(current);
                if (current.first->left != NULL)
                {
                    st.push({current.first->left, 1});
                }
            }
            else if (current.second == 2)
            {
                in.push_back(current.first->data);
                current.second++;
                st.push(current);
                if (current.first->right != NULL)
                {
                    st.push({current.first->right, 1});
                }
            }
            else
            {
                post.push_back(current.first->data);
            }
        }
    }
    cout << "The preorder traversal is: ";
    for (auto x : pre)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "The inorder traversal is: ";
    for (auto y : in)
    {
        cout << y << " ";
    }
    cout << endl;
    cout << "The postorder traversal is: ";
    for (auto z : post)
    {
        cout << z << " ";
    }
    cout << endl;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left = new Node(7);

    root->preInPostTraversal(root);

    return 0;
}