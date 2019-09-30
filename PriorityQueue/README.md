# Priority Queue

Abstract datatype with the following operations at minimum:
 
  - [Insert(val)](#insertval)
  - [ExtractMax()](#popfrontval)

Implementation using sorted doubly linked list

## Insert(val)
```
node.key <- val
if head = nil:
	head <- tail <- node
elseif head.key > val:
	node.next <- head
	node.prev <- nil
	head <- node
elseif tail.key < val:
	tail.next <- node
	tail <- node
	node.next <- nil
else:
	current <- head
	while current != tail
		if current.key > val  AND val > current.next.key	
			current <- current.next
	node.next <- current.next 
	node.prev <- current
	current.next <- node
```

### Running Time

> O(n): n

## ExtractMax()
```
if head = nil:
	ERROR: empty list
elseif head = tail:
	val <- head.key
	free(head)
	head <- tail <- nil
	return val
else:
	val <- tail.key
	lastNode <- tail
	tail <- tail.prev
	tail.next <- nil
	free(lastNode)
	return val
```

### Running Time

> O(n): 1

