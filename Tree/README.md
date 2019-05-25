# Tree Traversal

### DepthFirst Search

Traverse one sub-tree before exploring a sibling subtree.
 
  - [InOrderTraversal(tree)](#inordertraversaltree)
  - [PreOrderTraversal(tree)](#preordertraversaltree)

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


 ## PreOrderTraversal(tree)
 ```
 if tree = nil:
	return
Print(tree.key)
PreOrderTraversal(tree.left)
PreOrderTraversal(tree.right)
 ```

 ### Running Time

 > O(n): n