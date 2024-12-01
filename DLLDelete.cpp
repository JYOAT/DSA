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
Node* deleteHead(Node* head){
    if(head==NULL || head->front==NULL){
        return NULL;
    }
    Node * temp = head;
    head= head->front;
   
    head->back = nullptr;
    temp->front = nullptr;
    
    delete temp;
    return head;
}
Node * deleteTail(Node * head){
    if(head==NULL || head->front==NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->front!=NULL){
        temp= temp->front;
        
    }
    Node* prev = temp->back;
    prev->front = NULL;
    temp->back= NULL;
    free (temp);
    return head;
    
}

Node* deleteK(Node* head, int k){
    if(head==NULL || head->front==NULL){
        return NULL;
    }
    Node* temp = head;
    int c =0;
    
    while(temp){
        c=c+1;
        if(c==k){
            break;
        }
        temp= temp->front;
        
    }
    
    Node* next = temp->front;
    Node* prev = temp->back;
    if( next==NULL && prev==NULL){
        return NULL;
    }
    else if( next==NULL){
       return deleteTail(head);
    }
    else if( prev==NULL){
        return deleteHead(head);
    }
    prev->front = next;
    next->back = prev;
    temp->back= NULL;
    temp->front= NULL;
    free (temp);
    return head;
    
    
}
void deleteNode(Node* node ){
    Node* prev = node->back;
    Node* next = node->front;
    
    if(next==NULL){
        prev->front = NULL;
        node->back = NULL;
        delete node;
        return;
        
        
    }
    prev->front = next;
    next->back = prev;
    node->front=NULL;
    node->back =NULL;
    delete node;
    
}

int main() {
    // Write C++ code here
    vector <int> v = {7,5,6,};
    Node* head = convert2DLL(v);
    //head = insertEl(head,100, 6);
    deleteNode(head->front->front);
    print(head);
     
     

    return 0;
}
