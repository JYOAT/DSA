
Node* insertHead(Node* head, int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp = new Node(val);
    temp->next= head;
    return temp;
}
Node* insertTail(Node* head, int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp = head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    Node* x = new Node(val);
    temp->next = x;
    x->next = NULL;
    return head;
    
    
}
Node* insertk(Node* head, int val , int pos){
    if(head==NULL){
        if(pos==1){
            return new Node(val);
            
        }
        else {
            return head;
        }
        
    }
    if(pos==1){
        return new Node(val,head);
        
    }
    int c =0;
    Node* temp = head;
    while(temp){
        c++;
        if(c==pos-1){
            Node* newNode = new Node(val);
            newNode->next= temp->next;
            temp->next = newNode;
            break;
            
        }
        temp = temp->next;
    }
    return head;
    
}
Node* insertEl(Node* head, int val , int el){
    if(head==NULL){
        return NULL;
        
    }
    if(head->data==el){
        return new Node(val,head);
        
    }
    Node* temp = head;
    while(temp){
     
        if(temp->next->data==el){
            Node* newNode = new Node(val);
            newNode->next= temp->next;
            temp->next = newNode;
            break;
            
        }
        temp = temp->next;
    }
    return head;
    
}
