#include <stdio.h>
#include <stdlib.h>

// define the node data type
typedef struct Node
{
    int data; // data part
    struct Node *next; // pointer to store the address of the next node
} Node;

// function prototypes
Node *getNode(int);
void insert_at_end(int);
void display();

// initially list is empty
Node *head = NULL; // head of the linked list
Node *tail = NULL; // tail of the linked list


int main()
{
    // insert 1 - 5 in the linked list
    for (int i = 1; i <= 5; i++)
        insert_at_end(i); // head -> 1 -> 2 -> 3 -> 4 -> 5 -> NULL

    // display the generated linked list
    display(); // 1 -> 2 -> 3 -> 4 -> 5

    return 0;
}

Node *getNode(int data)
{
    // create the node
    Node *newNode = malloc(sizeof (Node));

    if (!newNode) // if (NULL == newNode)
    {
        printf("\nMemory allocation failed. Exiting program...\n");
        exit(1);
    }

    // initialize the node
    newNode->data = data; // (*newNode).data = data;
    newNode->next = NULL; // (*newNode).next = NULL;

    return newNode;
}

void insert_at_end(int data)
{
    // create and initialize the node
    Node *newNode = getNode(data);

    // insert the node into the linked list
    if (!head) // if list is empty
        head = newNode;
    else // if list is not empty
        tail->next = newNode;
     tail = newNode;
}

void display()
{
    if (!head) // if list is empty
        printf("\nList is empty.\n");
    else // if list is not empty
    {
        printf("\n");

        Node *temp = head; // temp will initially point to the first node

        while (temp) // while (NULL != temp)
        {
            printf("%d ", temp->data); // 10 20 30
            
            // shift the temp pointer to the next node
            temp = temp->next;
        }

        printf("\n");
    }
}
