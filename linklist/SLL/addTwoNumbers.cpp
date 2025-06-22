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

Node *addTwoNumber(Node *head1, Node *head2)
{
    Node *dummyNode = new Node(-1);
    Node *current = dummyNode;
    Node *temp1 = head1;
    Node *temp2 = head2;
    int carry = 0;

    while (temp1 != NULL || temp2 != NULL)
    {
        int sum = carry;
        if (temp1)
            sum += temp1->data;
        if (temp2)
            sum += temp2->data;
        Node *newNode = new Node(sum % 10);
        carry = sum / 10;
        current->next = newNode;
        current = current->next;
        if (temp1)
            temp1 = temp1->next;
        if (temp2)
            temp2 = temp2->next;
    }
    if (carry)
    {
        Node *newNode = new Node(carry);
        current->next = newNode;
    }
    return dummyNode->next;
}
int main()
{
    vector<int> arr = {3, 5};
    vector<int> brr = {4, 5, 9, 9};
    Node *head1 = arrToDLL(arr);
    Node *head2 = arrToDLL(brr);
    Node *head = addTwoNumber(head1, head2);
    print(head);
}