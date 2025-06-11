#include<iostream>
using namespace std;

class node
{
public:
    int n;
    node* next;
};

node *head = NULL;

void append(int data)
{
    node *newNode = new node;
    newNode->n = data;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    node *last = head;
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

void reverse() 
{
    node* prev = NULL;
    node* current = head;
    node* next = NULL;

    while(current != NULL) 
    {
        next = current->next;  
        current->next = prev;  
        prev = current;        
        current = next;       
    }

    head = prev; 
}

void print()
{
    node *ptr = head;
    while(ptr != NULL)
    {
        cout << ptr->n;
        if(ptr->next != NULL)
        {
            cout << " ";
        }
        ptr = ptr->next;
    }
    cout << endl;
}

int main() 
{
    int value = 0;
    while(cin >> value) 
    {
        append(value);
    }
    reverse();
    print();
    return 0;
}
