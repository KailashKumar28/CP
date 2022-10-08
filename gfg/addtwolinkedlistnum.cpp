//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    void reverse(Node* &head){
        Node* pre = NULL;
        Node* curr = head;
        Node* ford = NULL;
        
        while(curr != NULL){
            ford = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = ford;
        }
        head = pre;
    }
    void incertAtTail(Node*& head, Node*& tail, int d){
        Node* temp = new Node(d);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
        
    }
    struct Node* add(struct Node* first, struct Node* second){
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        while(first != NULL && second != NULL ){
            int sum = carry + first -> data + second -> data ;
            int digit = sum%10;
            // create a node and add the digit to it
            incertAtTail(ansHead,ansTail, digit);
            carry = sum/10;
            first = first -> next;
            second = second -> next;
        }
        while(first != NULL){
            int sum = carry + first -> data;
            int digit = sum%10;
            incertAtTail(ansHead,ansTail,digit);
            carry = sum/10;
            first = first -> next;

        }
        while(second != NULL){
            int sum = carry + second -> data;
            int digit = sum%10;
            incertAtTail(ansHead,ansTail,digit);
            carry = sum/10;
            second = second -> next;
        }

        while(carry != 0){
            int sum = carry;
            int digit = carry%10;
            incertAtTail(ansHead,ansTail,digit);
            carry = sum/10;

        }
        
        return ansHead;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        reverse(first);
        reverse(second);
        // Node* temp = first;
        // cout << "first reversed is :" << " ";
        // while(temp != NULL){
        //     cout << temp -> data << " ";
        //     temp = temp -> next;
        // }
        // cout << endl;
        // temp = second;
        // cout << "second reversed is :" << " ";
        // while(temp != NULL){
        //     cout << temp -> data << " ";
        //     temp = temp -> next;
        // }
        // cout << endl;
        Node* ans = add(first, second);
        
        reverse(ans);
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends