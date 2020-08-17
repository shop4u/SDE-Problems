int helper(TreeNode *root,int &res)
  {
      if(root==NULL) return 0;
      int lsum=helper(root->left,res);
      int rsum=helper(root->right,res);

      int x=max(max(lsum,rsum)+root->val,root->val);
      int y=max(x,lsum+rsum+root->val);
      //res will store the max Path sum among all subPath
      res=max(res,y);
      return x;
  }
int maxPathSum(TreeNode* root) {
        
        int res=INT_MIN;
        return max(helper(root,res),res);
        
}
