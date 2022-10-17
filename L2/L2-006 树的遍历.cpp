#include<iostream>
#include<queue>
using namespace std;
struct binaryTreeNode
{
    int element;
    binaryTreeNode* leftChild,
        * rightChild;
    binaryTreeNode() :element(0), leftChild(nullptr), rightChild(nullptr) {}
    binaryTreeNode(int theElement) :element(theElement), leftChild(nullptr), rightChild(nullptr) {}
};
int main()
{
    int N,
        postOrder[30],
        inOrder[30], inIndex[31];
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> postOrder[i];
    for (int i = 0; i < N; i++)
    {
        cin >> inOrder[i];
        inIndex[inOrder[i]] = i;
    }
    binaryTreeNode* root = new binaryTreeNode();
    for (int i = N - 1; i >= 0; i--)
    {
        binaryTreeNode* tmp = root;
        while (tmp->element)
        {
            if (inIndex[postOrder[i]] < inIndex[tmp->element])
                if (tmp->leftChild)
                    tmp = tmp->leftChild;
                else
                    tmp = tmp->leftChild = new binaryTreeNode();
            else
                if (tmp->rightChild)
                    tmp = tmp->rightChild;
                else
                    tmp = tmp->rightChild = new binaryTreeNode();
        }
        tmp->element = postOrder[i];
    }
    //输出
    queue<binaryTreeNode*> q;
    q.push(root);
    binaryTreeNode* tmp = q.front();
    q.pop();
    if (tmp)
    {
        cout << tmp->element;
        q.push(tmp->leftChild);
        q.push(tmp->rightChild);
    }
    while (q.size())
    {
        binaryTreeNode* tmp = q.front();
        q.pop();
        if (tmp)
        {
            cout << " " << tmp->element;
            q.push(tmp->leftChild);
            q.push(tmp->rightChild);
        }
    }
    cout << endl;
}