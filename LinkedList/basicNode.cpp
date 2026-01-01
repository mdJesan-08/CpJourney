#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

};


void LLPrint(Node* head)
{
    Node* tem = head;
    while(tem)
    {
        cout << tem->val << " ";
        tem = tem->next;

    }
    cout << endl;
}


Node* arrToLL(vector<int>& arr)
{
    Node* head = new Node(arr[0]);
    Node* tem = head;
    for(int i = 1; i < arr.size(); i++)
    {
        Node* tem1 = new Node(arr[i]);
        tem->next = tem1;
        tem = tem1;
        
    }
    return head;
}


void insertHead(Node* &head, int val)
{
    Node* headN = new Node(val);
    headN->next = head;
    head = headN;

}


Node* insertTail(Node* head, int val)
{
    Node* tailN = new Node(val);
    Node* tem = head;
    while(tem->next)
    {
        tem = tem->next;
    }

    tem->next = tailN;
    return head;
}


void insertAny(Node* &head, int index, int val)
{
    if(index == 0) insertHead(head,val);
    else
    {
        Node* newNode = new Node(val);
        int cnt = 0;
        Node* tem = head;
        while(cnt < index -1)
        {
            tem = tem->next;
            cnt++;
        }
        Node* tem1 = tem->next;
        tem->next = newNode;
        newNode->next = tem1;

    }
}

void reversePrint(Node* head)
{
    Node* tem = head;
    if(tem == NULL) return;
    reversePrint(tem->next);
    cout << tem->val << " ";
}


int main()
{

    vector<int> arr(10);
    arr = {10, 20 , 30, 40, 50, 60, 70, 80, 90, 200};
    
    Node* head = arrToLL(arr);
    LLPrint(head);

    reversePrint(head);

    return 0;
}