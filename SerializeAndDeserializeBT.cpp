#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}
void serialize(Node *root, vector<int> &A)
{

    queue<Node *> q;
    q.push(root);
    A.push_back(root->data);
    while (!q.empty())
    {
        Node *t = q.front();
        q.pop();

        if (t->left)
        {
            q.push(t->left);
            A.push_back(t->left->data);
        }
        else
            A.push_back(-1);
        if (t->right)
        {
            q.push(t->right);
            A.push_back(t->right->data);
        }
        else
            A.push_back(-1);
    }
}

/*this function deserializes
 the serialized vector A*/
Node *deSerialize(vector<int> &a)
{
    //Your code here
    Node *root;
    if (a[0] != -1)
        root = new Node(a[0]);
    else
        root = NULL;
    queue<Node *> q;
    q.push(root);
    int i = 0;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (a[i + 1] != -1)
        {
            temp->left = new Node(a[i + 1]);
            q.push(temp->left);
        }
        else
            temp->left = NULL;
        if (a[i + 2] != -1)
        {
            temp->right = new Node(a[i + 2]);
            q.push(temp->right);
        }
        else
            temp->right = NULL;
        i += 2;
    }

    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int tc;
    scanf("%d ", &tc);
    while (tc--)
    {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        vector<int> A;
        serialize(root, A);

        Node *getRoot = deSerialize(A);
        inorder(getRoot);
        cout << "\n";
    }

    return 0;
}