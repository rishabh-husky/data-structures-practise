# Tree Traversal

### DepthFirst Search

Traverse one sub-tree before exploring a sibling subtree.
 
  - [InOrderTraversal(tree)](#inordertraversaltree)
  - [PreOrderTraversal(tree)](#preordertraversaltree)
  - [PostOrderTraversal(tree)](#postordertraversaltree)
 
### BreadthFirst Search

Traverse all nodes at one level before progressing to next level.

  - [LevelTraversal(tree)](#leveltraversetree)

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


## PostOrderTraversal(tree)
 ```
 if tree = nil:
	return
PostOrderTraversal(tree.left)
PostOrderTraversal(tree.right)
Print(tree.key)
 ```

### Running Time

> O(n): n

## LevelTraversal(tree)
 ```
 if tree = nil:
	return
Queue q
q.enqueue(tree)
while not q.Empty()
	node <- q.dequeue()
	Print(node.key)
	if node.left != nil:
		q.enqueue(node.left)
	if node.right != nil:
		q.enqueue(node.right)
 ```

### Running Time

> O(n): 

