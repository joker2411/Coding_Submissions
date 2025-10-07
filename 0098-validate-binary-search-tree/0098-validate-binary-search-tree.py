# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inOrderTraversal(self, root, nodeOrder):
        if root == None:
            return
        self.inOrderTraversal(root.left, nodeOrder)
        nodeOrder.append(root.val)
        self.inOrderTraversal(root.right, nodeOrder)
    
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        nodeOrder = []
        self.inOrderTraversal(root, nodeOrder)
        for i in range(len(nodeOrder[:-1])):
            if nodeOrder[i] >= nodeOrder[i+1]:
                return False
        return True