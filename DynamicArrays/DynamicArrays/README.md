# Dynamic Arrays

Abstract datatype with the following operation:
 
  - [Get(i)](#inordertraversaltree)
  - [Set(i, val)](#preordertraversaltree)
  - [PushBack(val)](#postordertraversaltree)
  - [Remove(i)]
  - [Size()]

## Get(i)
```
if i < 0 OR i >= size:
	ERROR: index out of bounds
return arr[i];
```

### Running Time

> O(n): 1

## Set(i, val)
```
if i < 0 OR i >= size:
	ERROR: index out of bounds
arr[i] = val;
```

### Running Time

> O(n): 1

## PushBack(val)
```
if size = capacity:
	allocate new_arr [ 2 x capacity]
	for i from 0 to size - 1:
		new_arr[i] <- arr[i]
	free arr
	arr <- new_arr
	capacity <- 2 x capacity
arr[size] <- val
size <- size + 1
```

### Running Time

> O(n): 1

## Remove(i)
```
if i < 0 OR i >= size:
	ERROR: index out of bounds
arr[i] = val;
for j from i to size - 2:
	arr[j] <- arr[j+1]
size <- size +1
```

### Running Time

> O(n): 1

## Size()
```
return size;
```

### Running Time

> O(n): 1