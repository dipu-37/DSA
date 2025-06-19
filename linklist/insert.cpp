#include <bits/stdc++.h>
using namespace std;

/// crate node
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

/// print linklist
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

/// array to linkList
Node *createArr2LL(vector<int> &arr)
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

/// insert element at the first
Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}

/// insert Tail
Node *insertTail(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}

/// insert element in kth position
Node *insertPosition(Node *head, int val, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(val);
        }else{
            return head;
        }
    }
    if(k==1){
        return new Node(val,head);
    }
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *newNode = new Node(val, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

/// insert element before the value xx;
Node *insertBeforeValue(Node *head, int val)
{
    if (head == NULL)
    {
       return NULL;
    }
    if(head->data==val){
        return new Node(val,head);
    }
    Node *temp = head;
    bool found= false;
    while (temp->next != NULL)
    {
        if (temp->next->data==val)
        {
            Node *newNode = new Node(val, temp->next);
            temp->next = newNode;
            found=true;
            break;
        }
        temp = temp->next;
    }
    if(found==false){
        cout<<"not found"<<endl;
    }
    return head;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};

    Node *head = createArr2LL(arr);

    /// insert element first
    head = insertHead(head, 100);

    /// insert tail
    head = insertTail(head, 120);

    /// insert kth position
    head = insertPosition(head, 300, 3);

    print(head);
}