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

void print(Node * head){
    Node* temp = head;
    while (temp)
    {
       cout<<temp->data<<" ";
       temp= temp->next;
    }
    cout<<endl;
    
}

Node* createArrayToLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
}

int countTotal(Node* head){
    int cnt =0;
    Node* temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main(){
    vector<int>arr={10,20,30,40,50};
    Node* head = createArrayToLL(arr);
    print(head);
    int cntTotal = countTotal(head);
    cout<<cntTotal<<endl;

}