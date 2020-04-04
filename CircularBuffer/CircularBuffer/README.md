# Circular Buffer

Circular Buffer is a FIFO (First In First Out).
Circular Buffer implementation:
* Collection is made of array of integers.
* Throwing error if buffer is full.

### Circular Buffer api Implementation using linked list  

- [addToBuffer(Key)](#enqueuekey)
adds key to collection 

- [Key removeFromBuffer()](#key-dequeue)
removes and returns 

- [Boolean isEmpty()](#boolean-empty)
are there any elements ?

- [Boolean isFull()](#boolean-isfull)


## addToBuffer(key)
```
if isFull()
	return
collection.current <- key
current++
```

### Running Time

> O(n): 1


## Key removeFromBuffer()
```
if isEmpty()
	return
key = collection.front
delete collection.front
if front = current
	front = current = 0
else
	front++;
```

### Running Time
> O(n): 1


## Boolean isEmpty()
```
return current = front
```

### Running Time
> O(n): 1
   

## Boolean isFull()
```
return (current = front && current[front] != NULL)
```

### Running Time
> O(n): 1
