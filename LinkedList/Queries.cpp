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

void insertHead(Node* &head, int val)
{
    Node* headN = new Node(val);
    headN->next = head;
    head = headN;

}

void insertTail(Node* &head, int val)
{
    Node* tailN = new Node(val);
    Node* tem = head;
    while(tem->next)
    {
        tem = tem->next;
    }

    tem->next = tailN;
}

void deleteHead(Node* &head)
{
    Node* tem = head;
    head = tem->next;
    // delete tem;
    
}

void deleteTail(Node* &head)
{
    Node* tem = head;
    while(tem->next->next != NULL)
    {
        tem = tem->next;
    }
    Node* tem1 = tem->next;
    tem->next = NULL;
    // delete tem1;
    
}

void deleteAny(Node* &head, int pos)
{
    int cnt = 0;
    Node* tem = head;
    while(cnt < pos -1)
    {
        tem = tem->next;
        cnt++;
    }
    Node* tem1 = tem->next;
    tem->next = tem1->next;
    // delete tem1;

}



void deleteNode(Node* &head,int pos,int size)
{
    int cnt = 0;
    Node* tem = head;
    while(tem != NULL)
    {
        if(cnt == pos) break;
        tem = tem->next;
        cnt++;
    }

    if(cnt == 0) deleteHead(head);
    else if(cnt == size) deleteTail(head);
    else deleteAny(head, pos);

}


int main()
{
    int Q;
    cin >> Q;
    Node* head = nullptr;
    int size = -1;
    while(Q--)
    {
        int X, V;
        cin >> X >> V;
        if(X==0)
        {
            if(head == NULL) head = new Node(V);
            else insertHead(head,V);
            size +=1;
        }

        else if(X==1)
        {
            if(head == NULL) head = new Node(V);
            else insertTail(head, V);
            size +=1;
        }
        else if(X == 2 && (V <= size) && size != -1)
        { 
            deleteNode(head, V, size);
            size -=1;
        }

        LLPrint(head);

    }
    
    return 0;
}