

class TreeNode:

    def __init__(self, value):

        self.right = None
        self.left = None
        self.value = value

    def insert(self, value):

        if value < self.value:
            if self.left is None:
                self.left = TreeNode(value)
            else:
                self.left.insert(value)
        else:
            if self.right is None:
                self.right = TreeNode(value)
            else:
                self.right.insert(value)

tree = TreeNode(10)

