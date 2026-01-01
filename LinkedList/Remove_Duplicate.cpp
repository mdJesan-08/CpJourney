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

void duplicateFound(Node* head)
{
    unordered_map<int, int> hashMap;
    Node* tem = head;

    while(tem != NULL)
    {
        hashMap[tem->val] += 1;
        tem = tem->next;

    }
    Node* tem1 = head;
    while(tem1 != NULL)
    {
        if(hashMap[tem1->val] != -1)
        {
            cout << tem1->val << " ";
            hashMap[tem1->val] = -1;
        }

        tem1 = tem1->next;
    }
}



int main()
{
    Node* head = inputToLinkedList();
    duplicateFound(head);
    
    return 0;
}