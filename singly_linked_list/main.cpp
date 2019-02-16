 #include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
	int key;

	struct node * next;
};

struct node * createNode(int);

void pushFront(int, struct node **, struct node **);

int topFront(struct node *);

void popFront(struct node **, struct node **);

void pushBack(int,struct node **,struct node **);

int topBack(struct node *);

void popBack(struct node **, struct node **);

bool find(int,struct node *, struct node *);

void erase(int, struct node **, struct node **);

bool empty(struct node *);

void AddAfter( struct node *, int, struct node **);

void freeList(struct node *, struct node *);

int main()
{
	struct node * head = nullptr;

	struct node * tail = nullptr;

	int key{};

	empty(tail);

	key = topFront(head);

	pushFront(10, &head, &tail);

	key = topFront(head);

	pushFront(20, &head, &tail);

	key = topFront(head);

	popFront(&head,&tail);

	key = topFront(head);

	pushBack(30, &head, &tail);

	pushBack(40, &head, &tail);

	key = topFront(head);

	key = topBack(tail);

	popBack(&head,&tail);

	key = topBack(tail);

	find(30, head, tail);

	erase(30, &head, &tail);

	empty(tail);

	AddAfter(head, 50 ,&tail);

	AddAfter(tail, 60, &tail);

	find(50, head, tail);

	find(60, head, tail);
	//freeList(head, tail); //free list at the end of execution

	return 0;
}

void pushFront(int key, struct node ** head, struct node ** tail)
{
	struct node * newnode;

	newnode = createNode(key);

	newnode->next = *head;

	*head = newnode;

	if (*tail == nullptr)
		*tail = *head;
}

struct node * createNode(int key)
{
	struct node * newnode;

	newnode = (struct node *)malloc(sizeof(struct node));

	newnode->key = key;

	newnode->next = nullptr;

	return newnode;
}

int topFront(struct node * head)
{
	if (head == nullptr)
		return NULL;

	return head->key;
}

void popFront(struct node ** head,struct node ** tail)
{
	struct node * node;

	if(*head==nullptr)
	{
		cout << "Empty list" << endl;
	}

	node = *head;
	
	*head = (*head)->next;
	
	if (*head == nullptr)
		*tail = nullptr;

	free(node);
}

void pushBack(int key, struct node ** head, struct node ** tail)
{
	struct node * newnode;

	newnode = createNode(key);
	
	if (*tail == nullptr)
	{
		*head = *tail = newnode;
	}
	else 
	{
		(*tail)->next = newnode;
		*tail = newnode;
	}	
}

int topBack(struct node * tail)
{
	if (tail == nullptr) 
	{
		cout << "Empty list";
		return NULL;
	}
	else
	{
		return tail->key;
	}
		
}

void popBack(struct node **head,struct node **tail)
{
	struct node * node;

	if(*tail==nullptr)
	{
		cout << "Empty List" <<endl;
	}
	else 
	{
		if(*head==*tail)
		{
			free(*head);

			*head = *tail = nullptr;
		}
		else
		{
			node = *head;

			/** find second last node **/
			while(node->next->next!=nullptr)
			{
				node = node->next;
			}
			
			/** update pointer to null**/
			free(node->next);
			
			node->next = nullptr;

			*tail=node;

		}


	} 
}

bool find(int key,struct node * head, struct node * tail)
{
	struct node * p;


	if(head==nullptr)
	{
		cout << "List is empty" << endl;

		return NULL;
	}

	p = head;
	
	while(p!=tail)
	{
		if(p->key==key)
			return true;

		p = p->next;
	}

	if (tail->key == key)
		return true;

	return false;
}

void erase(int key, struct node ** head, struct node ** tail)
{
	struct node * current ,* prev=nullptr;

	if (*head == nullptr)
	{
		cout << "List is empty" << endl;
	}
	else if(*head==*tail && (*head)->key==key)
	{
		free(*head);

		*head = *tail = nullptr;
		
	}  
	else 
	{
		current = *head;

		while(current !=*tail)
		{
			if(current->key==key)
			{
				prev = current->next;

				prev->next = current->next->next;

				free(current);

				break;
			}

			prev = current;
			
			current = current->next;
			
		}

		if(current->key==key)
		{
			free(current);

			prev->next = nullptr;

			*tail = prev;

		}
	}
}

void freeList(struct node * head, struct node * tail)
{
	struct node * current, * next;

	current = head;

	while(current!=tail)
	{
		next = current->next;

		free(current);

		current = next;
	}

	if (tail != nullptr) //when tail points to non-null node 
	{
		free(tail);
	}
}


bool empty(struct node* tail)
{
	return (tail == nullptr);
}

void AddAfter(struct node * after, int key,struct node ** tail)
{
	struct node * newnode = createNode(key);

	newnode->next = after->next;
	
	after->next = newnode;

	if (*tail == after)
		*tail = newnode;
}