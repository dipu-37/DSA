#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *arrToDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, mover);
        mover->next = temp;
        mover = temp;
    }
    return head;
}



Node *print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// delete head in a DLL
Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    delete prev;
    return head;
}

// delete tail in a DLL
Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    // while (temp->next->next != NULL)
    // {
    //     temp= temp->next;
    // }
    // temp->next = nullptr;
    // delete temp->next;
    // return head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *prev = temp->back;
    prev->next = nullptr;
    delete temp;
    return head;
}

// remove kth element in dll

Node *removeKth(Node *head, int k)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *font = temp->next;
    if (prev == NULL && font == NULL)
        return NULL;
    if (prev == NULL)
    {
        deleteHead(head);
    }
    else if (font == NULL)
    {
        deleteTail(head);
    }
    prev->next = font;
    font->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}

Node *removeNode(Node *head, int val)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data==val)
            break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *font = temp->next;
    if (prev == NULL && font == NULL)
        return NULL;
    if (prev == NULL)
    {
        deleteHead(head);
    }
    else if (font == NULL)
    {
        deleteTail(head);
    }
    prev->next = font;
    font->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    Node *head = arrToDLL(arr);
    // head = deleteHead(head);
    // head = deleteTail(head);
    //head = removeKth(head, 4);
    head = removeNode(head,60);
    print(head);
}