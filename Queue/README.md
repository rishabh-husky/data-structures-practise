# Queue

Queue is a LIFO (Last In First Out).

### Queue api Implementation using linked list  

- [Enqueue(Key)](#enqueuekey)
adds key to collection 

- [Key Dequeue()](#key-dequeue)
removes and returns least recently-added key from collection

- [Boolean Empty()](#boolean-empty)
are there any elements ?


## Enqueue(key)
```
newnode <- new node
newnode.key <- key
newnode.next <- nil

if tail = nil:
	head <- newnode 
	tail <- newnode
else:
	tail.next <- newnode
	tail <- newnode
```

### Running Time

> O(n): 1


## Key Dequeue()
```
key <- head.key
head <- head.next
if head = nil:
	tail <- nil
return key
```

### Running Time
> O(n): n


## Boolean Empty()
```
return tail = nil
```

### Running Time
> O(n): 1
