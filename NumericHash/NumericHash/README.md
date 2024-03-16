# Hash Table for numeric values

Implementation of hash table using Universal family of hash function.

H = { h: ((a * x + b) % m) % p }

m is the cardinality of hash functions.
1 >= a  <= p-1 
0 >= b  <= p-1
p is prime greater than m.
n is number of values
α = m/n

0.5 => α <= 1

### Hash table api implementation  

- [Key hash(value)](#) 
   generate hash value using universal family of hash functions.

- [add(value)](#k)
  add value to the hash table.
  
- [Boolean exists(value)](#k)
   check if value exists in hash table.

- [Boolean remove(value)](#k)
  removes a value from hash table.

## Rehash
if α < 0.5 OR α > 1
	m <- ceil (0.9 * n)
```
### Key hash(value)

if α < 0.5 OR α > 1
	Rehash()
p = random (m , prime number greater than m)
return (rand(1, p-1) * value + rand(0, p-1)) % m) % p


### Running Time

> O(n): 1

### add(value)]
x <- h(value)
x.next <- value

### Running Time

> O(n): 1


### Boolean exists(value)
x <- h(value)
if x.next = NIL:
	ERROR: empty list
p <- x
while p.next != NIL
	if p.next.value = value
		return true
	else
		p <- p.next
return false

### Running Time

> O(n): 1 + α

### Boolean remove(value)
key <- h(value)
if key.next = NIL:
	ERROR: empty list
current <- key.next
while current != NIL
	if current.value = value
		prev.next <- current.next
		return true
	else
		prev <- current
		current <- current.next
return false

### Running Time

> O(n): 1 + α
```
