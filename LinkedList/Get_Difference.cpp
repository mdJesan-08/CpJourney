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


Node* inputToLinkedList()
{
    int val;
    cin >> val;
    if(val == -1) return NULL;
    Node* head = new Node(val);
    Node* tem = head;

    while(cin >> val && val != -1)
    {
        Node* tem1 = new Node(val);
        tem->next = tem1;
        tem  = tem1;
        
    }
    return head;
}

int findMax(Node* head)
{
    Node* tem = head;
    int maxi = tem->val;

    while(tem != NULL)
    {
        maxi = max(maxi, tem->val);

        tem = tem->next;

    }
    return maxi;
}

int findMin(Node* head)
{
    Node* tem = head;
    int mini = tem->val;

    while(tem != NULL)
    {
        mini = min(mini, tem->val);

        tem = tem->next;

    }
    return mini;
}


int main()
{
    Node* head = inputToLinkedList();
    // LLPrint(head);
    cout << findMax(head) -findMin(head) << endl;
      
    return 0;
}