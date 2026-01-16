class Node:
    def __init__(self):
        self.children = {}
        self.end = False

class WordDictionary:

    def __init__(self):
        self.root = Node()

    def addWord(self, word: str) -> None:
        current = self.root
        for c in word:
            if c not in current.children:
                current.children[c] = Node()
            current = current.children[c]
        current.end = True

    def search(self, word: str) -> bool:
        def dfs(node, position):
            if position == len(word):
                return node.end
            c = word[position]

            if c == '.':
                for child in node.children.values():
                    if dfs(child, position+1):
                        return True
                return False
            else:
                if c not in node.children:
                    return False
                return dfs(node.children[c], position+1)
        return dfs(self.root, 0)


# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)