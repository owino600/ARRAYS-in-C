LINKED LISTS
What if I say Linked Lists are chunks linked together allowing transversal from the first node to the last node then back and the process repeat itself inserting, deleting, and updating the nodes.
Take an instance of the below instance:
in a singly linked list the chunk/node has two parts the data which stores data and the Next which stores the address of the next chunk/node if there is
else it stores a NULL value
for I to access data in the first Node i'll have to store the address at a node at the beggining called Head that starts the iteration of the linked list
the address of first Node is stored in the Head hence to access the data of a Node one has to have the address to the node.
with the address of first node stored in the Head I am able to access the New node, and the address of Next New Node will be stored in the New node to give me access to the data in Next New Node.
	# . symbolizes move
	# * symbolizes Next
but instead of having a code like this which will be somehow confusing:
	# *firstnode.next = Newnode
we can use this syntax which looks more direct:
	# firstnode->next = Newnode
Linked Lists ensure we can stich together values instead of creating new memories as in arrays incase of manipulation
Linked List uses more memory compared to arrays
