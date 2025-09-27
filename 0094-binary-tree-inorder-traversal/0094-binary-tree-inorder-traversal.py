# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        node: TreeNode = root
        st = list()
        answer = list()
        while node or len(st)>0:
            while node:
                st.append(node)
                node = node.left
            if len(st) == 0:
                break
            node = st.pop()
            answer.append(node.val)
            node = node.right
        return answer
