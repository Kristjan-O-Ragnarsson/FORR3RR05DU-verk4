class Node:
    def __init__(self, v):
        self.value = v
        self.left = None
        self.right = None

    def insert(self, n):
        if self.value == n:
            return False
        elif self.value > n:
            if self.left:
                return self.left.insert(n)
            else:
                self.left = Node(n)
                return True
        else:
            if self.right:
                return self.right.insert(n)
            else:
                self.right = Node(n)
                return True

    def find(self, n):
        if self.value == n:
            return True
        elif n < self.value:
            if self.left == None:
                return False
            else:
                return self.left.find(n)
        else:
            if self.right == None:
                return False
            else:
                return self.right.find(n)


class Tree:
    def __init__(self):
        self.root = None

    def insert(self, n):
        if self.root:
            return self.root.insert(n)
        else:
            self.root = Node(n)
            return True

    def find(self, n):
        if self.root == None:
            return False
        else:
            return self.root.find(n)



t = Tree()
print t.insert(6)
print t.insert(2)
print t.insert(3)
print t.insert(7)

print "\n#####\n"
for i in range(1, 20):
    print i, ": ", t.find(i)
