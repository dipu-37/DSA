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
int findLength(Node *slow, Node *fast)
{
    fast = fast->next;
    int cnt = 1;
    while (slow != fast)
    {
        cnt++;
        fast = fast->next;
    }
    return cnt;
}
int detectLoop(Node *head)
{
    // Node *temp = head;
    // map<Node *, int> mpp;
    // int t = 1;
    // while (temp != NULL)
    // {
    //     if (mpp.find(temp) != mpp.end())
    //     {
    //         return t - mpp[temp];
    //     }
    //     mpp[temp] = t;
    //     t++;
    //     temp = temp->next;
    // }
    // return -1;

    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return findLength(slow, fast);
        }
    }
    return -1;
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

    int loopLength = detectLoop(head);
    cout << loopLength << endl;
}