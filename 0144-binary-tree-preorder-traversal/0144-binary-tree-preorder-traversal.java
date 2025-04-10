/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

    //RECURSIVE
// class Solution {
//     public List<Integer> preorderTraversal(TreeNode root) {
//         List<Integer> result = new ArrayList<>();
//         preorder(root,result);
//         return result;
//     }

//     private void preorder(TreeNode node, List<Integer> result){
//             if(node==null) return;
//             result.add(node.val);
//             preorder(node.left, result);
//             preorder(node.right, result);
//         }
//     }

    //ITERATIVE
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<>();
        if (root == null) return result;

        Stack<TreeNode> st = new Stack<>();
        st.push(root);

        while (!st.isEmpty()) {
            TreeNode curr = st.pop();
            result.add(curr.val);

            if (curr.right != null) st.push(curr.right);
            if (curr.left != null) st.push(curr.left);
        }

        return result;
    }
}


