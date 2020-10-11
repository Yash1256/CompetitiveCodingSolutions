#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
} SinglyLinkedListNode;

SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *head, int position)
{

    if (head == NULL)
    {
        return head;
    }

    else if (position == 0)
    {
        SinglyLinkedListNode *root = head->next;
        free(head);
        return root;
    }

    else
    {
        SinglyLinkedListNode *temp = head;
        position = position - 1;
        while (temp->next != NULL && position--)
        {
            temp = temp->next;
        }
        SinglyLinkedListNode *root = temp->next->next;
        free(temp->next);
        temp->next = root;
        return head;
    }
}