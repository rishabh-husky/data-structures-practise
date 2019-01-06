# Singly Linked list  operations

### Implement api for singly linked list 
- [PushFront(Key)] (#pushfrontkey)
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

## Key TopFront()
```
if head=nil:
	return NIL
return head->key
```

### Running Time
> O(n): 1
