#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;

} DoublyLinkedListNode;

DoublyLinkedListNode *reverse(DoublyLinkedListNode *head)
{

    DoublyLinkedListNode *returner = head;
    // DoublyLinkedListNode *temp=head;

    while (head != NULL)
    {
        DoublyLinkedListNode *prev = head->prev;
        head->prev = head->next;
        head->next = prev;
        returner = head;
        head = head->prev;
    }

    return returner;
}