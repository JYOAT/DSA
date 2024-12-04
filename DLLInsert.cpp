// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* front;
    Node* back;
    
    Node(int data1, Node* front1, Node* back1){
        data = data1;
        front = front1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        front = nullptr;
        back = nullptr;
    }
};
 


Node * convert2DLL(vector <int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i =1; i<arr.size(); i++){
        Node * temp = new Node(arr[i]);
        prev->front= temp;
        temp->back = prev;
        prev = prev->front;
    }
    return head;
    
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->front;
    }
}
Node* insertHead(Node* head, int val){
    Node* temp = new Node(val,head, nullptr);
    head->back = temp;
    return temp;
}
Node * insertTail(Node* head, int val){
    Node* temp = head;
    while(temp->front!=NULL){
        temp = temp->front;
    }
    Node* newN = new Node(val);
    temp->front= newN;
    newN->back = temp;
    return head;
}
Node * insertK(Node* head, int val , int k){
    if (k==1){
        return insertHead(head,val);
    }
    int c = 0;
    Node* temp = head;
    while(temp){
        c= c+1;
        if(c==k){
            break;
        }
        temp = temp->front;
    }
    Node* prev = temp->back;
    Node* newN= new Node(val,temp,prev);
    prev->front = newN;
    temp->back = newN;
    return head;
}

void insertNode(Node* node,int val){
    Node* prev = node->back;
    Node* temp = new Node(val,node,prev);
    prev->front =temp;
    node->back = temp;
    
}
