class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL)
        {
            return 0;
        }
        else
        {
            int lHeight=height(node->left);
            int rHeight=height(node->right);
            if(lHeight>rHeight)
            {
                return lHeight+1;
            }
            else
            {
                return rHeight+1;
            }
        }
        
    }
};
