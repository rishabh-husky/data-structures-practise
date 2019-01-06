# Singly Linked list  operations

### Implement api for singly linked list 
- PushFront(Key) 
- TopFront()
- PopFront()


## PushFront(key)
```
node <- new node
node.key <- key
node.next <- head
head <- node
if tail=nil:
	tail<-head
```
### Running Time

> O(n): 1

## Key TopFron()
```
if head=nil
	return NIL
return head->key
```

###Running Time
> O(n): 1
