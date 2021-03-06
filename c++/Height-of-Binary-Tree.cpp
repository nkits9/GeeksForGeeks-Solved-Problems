//Problem-1: Height of Binary Tree

// Method 1: Recursive, Time: O(n) , Space: O(n)
int height(Node* node) {
    // base case
    if (node==NULL)
        return 0;

    else
        return 1 + max(height(node->left), height(node->right));
}

//It can also be done using level order traversal in O(1) space.

-------------------------------------------------------------------------------------------------------------------------
//Problem-2: Count Leaves in Binary Tree 

// Method 1: Iterative, Time: O(n) , Space: O(n)
int countLeaves(Node* root) {
    int count = 0;
    if(root == NULL)    return count;
    
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if(temp->left != NULL)  q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
            
        if(temp->left == NULL && temp->right == NULL) {
            count++;
        }
    }
    return count;
}

// Method 2: Recursive, Time: O(n) , Space: O(n)
int countLeaves(Node* root) {
    if(root == NULL)    
        return 0;
    if(root->left == NULL && root->right == NULL) 
        return 1;
    
    return countLeaves(root->left) + countLeaves(root->right);
}

