# Circular Buffer

Circular Buffer is a FIFO (First In First Out).
Circular Buffer implementation:
* Collection is made of array of integers.
* Throwing error if buffer is full.
* Front, Rear, Current keys are maintained.(default value -1 when buffer is empty)

### Circular Buffer api Implementation using linked list  

- [pushToBuffer(Key)](#addtobuffer)
add key at rear to buffer

- [Key popFromBuffer()](#key-removefrombuffer)
removes and returns front value from buffer

## pushToBuffer(key)
```
if current != -1 AND collection.current != NULL
	return

if current < 0
	front <- 0
	rear <- 0
	collection.front <- value
else
	collection.current <- value
	rear <- current

if index = (collection.capacity() - 1)
	current <- 0;
else
	current <- current + 1;
```

### Running Time

> O(n): 1

## Key popFromBuffer()
```
if current = -1
	return
key = collection.front
delete collection.front

if front = rear
	front = rear = current = -1
else
	if index = (collection.capacity() - 1)
		front <- 0;
	else
		front <- front + 1;

return key
```

### Running Time
> O(n): 1