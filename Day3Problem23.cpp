#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void InsertAtEnd(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        head = tail = new node(data);
    }
    else
    {
        node *n = new node(data);
        tail->next = n;
        tail = n;
    }
}

void reverse(node *&head)
{
    node *current = head;
    node *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

node *ReorderList(node *head, int n)
{
    if (head == NULL or n == 0)
    {
        return NULL;
    }
    int half = n / 2;
    node *sec = head, *prev, *first = head, *curr = nullptr;
    for (int i = 0; i < half; i++)
        prev = sec, sec = sec->next;
    prev->next = nullptr;
    reverse(sec);
    head = first;
    first = first->next;
    head->next = sec;
    curr = sec;
    sec = sec->next;
    for (int i = 1; i < half; i++)
    {
        curr->next = first;
        first = first->next;
        curr = curr->next;
        curr->next = sec;
        sec = sec->next;
        curr = curr->next;
    }
    if (sec)
    {
        curr->next = sec;
        sec->next = nullptr;
    }
    return head;
}

void Print(node *head, int n)
{
    while (head && n > 1)
    {
        cout << head->data << "->";
        head = head->next;
        n--;
    }
    cout << head->data << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int n, no;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        InsertAtEnd(head, tail, no);
    }
    node *head1 = ReorderList(head, n);
    Print(head1, n);
    return 0;