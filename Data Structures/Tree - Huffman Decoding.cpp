/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/

int i = 0;

void recursion(node* root, string s)
{
    if(!root->left && !root->right)
    {
        cout << root->data;
        return;
    }
    
    if (s[i] == '0')
    {
        i++;
        recursion(root->left, s);
    }
    else if(s[i] == '1')
    {
        i++;
        recursion(root->right, s);
    }
}

void decode_huff(node * root,string s)
{
    while(i<s.length())
    {
        recursion(root, s);
    }
}
