#include <iostream>
#include <vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
 
Node* string2LL(vector <int> & v){
    Node* head = new Node(v[0]);
    Node* mover = head;
    for(int i =1; i<v.size();i++){
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int calculateLength(Node* head){
    int c =0;
    Node* temp = head;
    while (temp){
       temp = temp->next;
       c++;
    }
    return c;
    
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
Node* deletehHead(Node* head){
    if (head==NULL ){
        return head;
    }
    Node* temp = head;
    head= head->next;
    free(temp);
    return head;
}
Node * deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp= temp->next;
        
    }
    free(temp->next);
    temp->next= NULL;
    return head;
}
Node * deletek(Node* head, int k){
    if(head==NULL)return head;
    if(k==1){
        Node * temp = head;
        head= head->next;
        free(temp);
        return head;
    }
    int c =0;
    Node * temp = head;
    Node * prev = NULL;
    while(temp){
        c++;
        if(c==k){
            prev->next= prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp= temp->next;
    }
    return head;
    
}
Node * deleteEl(Node* head, int el){
    if(head==NULL)return head;
  //  
  if(head->data==el){        
        Node * temp = head;
        head= head->next;
        free(temp);
        return head;
    }
    
    Node * temp = head;
    Node * prev = NULL;
    while(temp){
        //
        if(temp->data==el){
            prev->next= prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp= temp->next;
    }
    return head;
    
}



int main() {
    // Write C++ code here
    vector <int> v = {7,5,6,12};
    Node* head = string2LL(v);
    head = deletehHead(head);
     print(head);

    return 0;
}
