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

int countTotal(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

Node *findMiddle(int cntTotal, Node *head)
{
    if (head == NULL || cntTotal == 0)
        return NULL;
    Node *temp = head;
    int midNode = (cntTotal / 2) + 1;
    while (temp != NULL)
    {
        midNode--;
        if (midNode == 0)
        {
            break;
        }
        temp = temp->next;
    }
    return temp;

    // Node *slow = head;
    // Node *fast = head;
    // while (fast != NULL && fast->next != NULL)
    // {
    //     slow = slow->next;
    //     fast= fast->next->next;
    // }
    // return slow;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    Node *head = createArrayToLL(arr);
    print(head);
    int cntTotal = countTotal(head);
    cout << cntTotal << endl;
    Node *middle = findMiddle(cntTotal, head);
    cout << middle->data << endl;
}