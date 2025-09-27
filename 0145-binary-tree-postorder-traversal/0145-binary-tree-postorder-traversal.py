# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        answer = []
        if not root:
            return answer
        
        st1 = [root]
        st2 = list()
        while len(st1)>0:
            node = st1.pop()
            st2.append(node.val)
            if node.left:
                st1.append(node.left)
            if node.right:
                st1.append(node.right)

        while len(st2)>0:
            curr = st2.pop()
            answer.append(curr)
        return answer