# Tree Traversal

### DepthFirst Search

Travese one sub-tree before exploring a sibling subtree.

  - [InOrderTraversal(tree)](#inordertraversal-tree)

## InOrderTraversal(tree)
```
if tree = nil:
	return
InOrderTraversal(tree.left)
Print(tree.key)
InOrderTraversal(tree.right)
```

### Running Time

> O(n): n