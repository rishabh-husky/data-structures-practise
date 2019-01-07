# Singly Linked list  operations

### Implement api for singly linked list 
- [PushFront(Key)](#pushfrontkey)
add to front 

- [Key TopFront()](#key-topfront)
return front item

- [PopFront()](#popfront)
remove front item

- [PushBack(key)](#pushbackkey)
add to  back

- [Key TopBack()](#key-topback)
return back item

- [PopBack()](#popback)
remove back item

- Boolean Find(key)
is key in list

- Erase(key)
remove key from the list

- Boolean Empty()
is list empty

- AddBefore(Node,key)
adds key before node

- AddAfter(Node,key)
adds key after node


## PushFront(key)
```
node <- new node
node.key <- key
node.next <- head
head <- node
if tail = nil:
	tail <- head
```

### Running Time

> O(n): 1

## Key TopFront()
```
if head = nil:
	ERROR: empty list
return head->key
```

### Running Time
> O(n): 1

## PopFront()
```
if head = nil:
	ERROR: empty list 
head <- head.next
if head = nil:
	tail <- nil
```

### Running Time
> O(n): 1

## PushBack(key)
```
node <- new node
node.key <- key
node.next <- nil
if tail = nil:
	head <- tail <- node
else:
	tail.next <- node
	tail <- node
```

### Running time
> O(n): 1


## Key TopBack()
```
if tail = nil:
	ERROR: empty list
else
	tail->key
```

### Running time
> O(n): 1

## PopBack()
```
if head = nil:
	ERROR: empty list
if head = tail:
	head <- tail <- nil
else
	p <- head
	while p.next.next != nil
		p <- p.next
	p.next <- nill
	tail <-p
```

### Running Time
> O(n)
