class Node:
    def __init__(self,data):
        self.right=self.left=None
        self.data = data
class Solution:
    def insert(self,root,data):
        if root==None:
            return Node(data)
        else:
            if data<=root.data:
                cur=self.insert(root.left,data)
                root.left=cur
            else:
                cur=self.insert(root.right,data)
                root.right=cur
        return root

    def getHeight(self,root):
        if root:
            right_side = 0
            left_side = 0
            if root.right:
                right_side = self.getHeight(root.right) + 1
            if root.left:
                left_side = self.getHeight(root.left) + 1
            return max(right_side, left_side) 
        else: 
            return 0


T=int(raw_input())
myTree=Solution()
root=None
for i in range(T):
    data=int(raw_input())
    root=myTree.insert(root,data)
height=myTree.getHeight(root)
print height       