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
Node *insertBeforeHead(Node *head, int val)
{
    Node *newHead = new Node(val, head, nullptr);
    head->back = newHead;
    return newHead;
}

Node *insertBeforeTail(Node *head, int val)
{
    if (head->next == NULL)
    {
        return insertBeforeHead(head, val);
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    Node *newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}

Node* insertKthEle(Node* head,int k, int val){
    if(k==1){
        return insertBeforeHead(head,val);
    }
    Node* temp = head;
    int cnt =0;
    while (temp!=NULL)
    {
       cnt++;
       if(cnt==k) break;
       temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
    
}

void insertBeforeNode(Node* node,int val){
    Node* prev = node->back;
    Node* newNode = new Node(val,node,prev);
    prev->next = newNode;
    node->back = newNode;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    Node *head = arrToDLL(arr);
    head = insertBeforeHead(head, 50);
    head = insertBeforeTail(head,100);
    head = insertKthEle(head,3,400);
    insertBeforeNode(head->next,800);
    print(head);
}