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
    Node* head = new Node(arr[0]);
    Node* mover= head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,mover);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* print(Node* head){
    Node* temp = head;
    while (temp!= NULL)
    {
       cout<<temp->data<<" ";
       temp= temp->next;
    }
    cout<<endl;
}

// delete head in a DLL
Node* deleteHead(Node* head){
    if(head == NULL || head->next ==NULL) return NULL;
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    delete prev;
    return head;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    Node* head = arrToDLL(arr);
    head = deleteHead(head);
    print(head);
}