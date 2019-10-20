// From a binary tree, get the minimum element
int minValue(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    int miniElement;
    while(root){
        miniElement = root->data;
        root=root->left;
    }
    return miniElement;
    // Code here
}

