#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
} SinglyLinkedListNode;

int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{

    SinglyLinkedListNode *temp1 = head1;
    SinglyLinkedListNode *temp2 = head2;

    while (temp1 != temp2)
    {

        if (temp1 == NULL)
        {
            temp1 = head2;
        }
        else
        {
            temp1 = temp1->next;
        }

        if (temp2 == NULL)
        {
            temp2 = head1;
        }
        else
        {
            temp2 = temp2->next;
        }
    }
}