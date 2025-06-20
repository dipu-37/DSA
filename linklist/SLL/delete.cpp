#include<bits/stdc++.h>
using namespace std;

/// crate node
struct Node{
public:
    int data;
    Node* next;
public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

/// print linklist
void print(Node * head)
{
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
/// array to linkList

Node* createArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
/// delete head

Node* deleteHead(Node* head)
{
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    //free(temp);
    delete temp;
    return head;
}

/// delete tail

Node* deleteTail(Node* head)
{
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp = head;
    while(temp->next->next !=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
/// remove kth element
Node* removeK(Node* head,int k)
{
    if(head==NULL) return NULL;
    if(k==1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt =0;
    Node* temp=head;
    Node* prev = NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next= prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp= temp->next;
    }
    return head;

}

/// value from linklist
Node* removeEle(Node* head,int val)
{
    if(head==NULL) return NULL;
    if(head->data==val){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt =0;
    Node* temp=head;
    Node* prev = NULL;
    while(temp!=NULL){
        if(temp->data==val){
            prev->next= prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp= temp->next;
    }
    return head;

}

int main()
{
    vector<int>arr={10,20,30,40,50,60,70};

    Node* head = createArr2LL(arr);
    /// delete head
    head = deleteHead(head);

    /// delete tail
    head = deleteTail(head);

    /// delete any kth element
    head= removeK(head,3);

    /// remove value 
    head = removeEle(head,30);
    print(head);

}