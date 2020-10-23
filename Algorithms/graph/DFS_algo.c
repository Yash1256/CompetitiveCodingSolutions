#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>
#define maxo 100
#define sc(n)  scanf("%d", &n);

typedef struct Node {
    int data;
    struct Node* next;
}node;

struct Stack {
    int top;
    unsigned Capacity;
    int* array;
};

struct Stack* create_Stack(unsigned Capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->Capacity = Capacity;

    stack->top = -1;
    stack->array = (int*)malloc(stack->Capacity * sizeof(int));

    return stack;
}  

int Is_Full(struct Stack* stack) 
{
    return stack->top == stack->Capacity - 1; 
} 
  

int Is_Empty(struct Stack* stack) 
{ 
    return stack->top == -1;
}
  

void Push(struct Stack* stack, int item)
{ 
    if (Is_Full(stack))
        return;
    stack->array[++stack->top] = item;
}


int Pop(struct Stack* stack)
{
    if (Is_Empty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

int Peek(struct Stack* stack)
{
    if (Is_Empty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}


void Insert(int v,int u,node* G[])
{
    node *p,*q;

	q=(node*)malloc(sizeof(node));
    q->data=u;
    q->next=NULL;

    if(G[v]==NULL)
        G[v]=q;
    else
    {        
        p=G[v];

		while(p->next!=NULL)
        	p=p->next;
        p->next=q;
    }
}

void add_Edge(node* arr[] , int v , int u)
{
    Insert(v, u,arr);
    Insert(u, v, arr);
}

void recursive_DFS(node* arr[] , int key , bool visited[])
{
    visited[key] = true;

    printf("%d ", key);
    node* temp = arr[key];

    while (temp)
    {
        if (!visited[temp->data])
        recursive_DFS(arr, temp->data , visited);

        temp = temp ->next;
    }
}


void iterative_DFS(node* head[], int root , bool visited[] )
{
    struct Stack* stack = create_Stack(100);
    Push(stack,root);

    while (!Is_Empty(stack))
    {
        int s;
        s = Peek(stack);
        Pop(stack);

        if (!visited[s])
        {
            printf("%d ",s);
            visited[s] = true;
        }

       node* temp = head[s];

       while (temp)
       {
            if (!visited[temp->data])
                Push(stack,temp->data);

            temp = temp->next;
       }
    }
}

int main(){

    int n;

    printf("\n| DFS Algorithm |\n\n");

    printf("Enter the nodes of the graph :: \n");

    sc(n);

    node* head[n];
    bool visited[n];

    for (int i = 0 ; i<n ; i++)
    {
        head[i] = NULL;
        visited[i] = false;
    }

    int no_of_edges;

    printf("Enter the no of edges ::\n");
    scanf("%d", &no_of_edges);

    int u,v;

    printf("Enter the (v,u) pairs ::\n");
    for (int i = 0 ;i<no_of_edges;i++)
    {
        scanf("%d%d",&v,&u);
        add_Edge(head,v,u);
    }

    int choice;
    int yrr[maxo];

    for(int i=0;i<maxo;i++)
        yrr[i] = i;

    printf("Enter your choice for DFS :- \n\n 1)Recursive 2) Iterative ::\n");
    scanf("%d", &choice);

    if (choice == 1 )
    {
        int start;
        printf("Enter the starting Root\n");
        scanf("%d",&start);
        recursive_DFS(head, start , visited);
    }
    else{
        int start;
        printf("Enter the starting Root ::\n");
        scanf("%d",&start);
        iterative_DFS(head, start , visited);
    }
}