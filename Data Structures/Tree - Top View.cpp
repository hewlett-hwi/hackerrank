/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void topViewLeft(node* root) {
    if(root->left) {
        topViewLeft(root->left);
    }
    printf("%d ", root->data);
}

void topViewRight(node* root) {
   printf("%d ", root->data);
    if(root->right)
        topViewRight(root->right);
}

void topView(node * root) {
    if(root->left)
        topViewLeft(root->left);
    printf("%d ", root->data);
    if(root->right)
        topViewRight(root->right);
}
