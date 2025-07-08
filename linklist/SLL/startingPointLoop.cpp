#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *createArrayToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Node *findLoop(Node *head)
// {
//     Node *temp = head;
//     map<Node *, int> mpp;
//     while (temp != NULL)
//     {
//         if (mpp.find(temp) != mpp.end())
//         {
//             return temp;
//         }
//         mpp[temp] = 1;
//         temp = temp->next;
//     }
//     return NULL;
// }
Node *findLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next->next;
        if (fast == slow)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            return slow;
        }
    }
    return NULL;
}
int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third;

    Node *startingPoint = findLoop(head);
    if (startingPoint != NULL)
        cout << "Loop starts at: " << startingPoint->data << endl;
    else
        cout << "No loop detected" << endl;
}