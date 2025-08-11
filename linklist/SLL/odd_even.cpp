#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
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

Node *arrToLL(vector<int> &arr)
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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// Node* evenOdd(Node* head){
//     Node* temp = head;
//     vector<int>arr;

//     while (temp!=NULL && temp->next!=NULL)
//     {
//         arr.push_back(temp->data);
//         temp=temp->next->next;
//     }
//     Node* temp2= head->next;
//     while (temp2!=NULL && temp2->next!=NULL)
//     {
//         arr.push_back(temp2->data);
//         temp2= temp2->next->next;
//     }

//     Node* mover= head;
//     for(int i=0;i<arr.size();i++){
//         mover->data=arr[i];
//         mover=mover->next;
//     }

//     return head;
// }

Node *evenOdd(Node *head)
{
    Node *even = head;
    Node *oddPre = head->next;
    Node *odd= head->next;
    while (even!=nullptr && even->next!=nullptr || odd!=nullptr && odd->next!=nullptr)
    {
       even->next=even->next->next;
       even=even->next->next;
       odd->next=odd->next->next;
       odd=odd->next->next;
    }
    even->next=oddPre;
    return head;
    
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};
    Node *head = arrToLL(arr);
    print(head);
    head = evenOdd(head);
    cout << endl;
    print(head);
}
