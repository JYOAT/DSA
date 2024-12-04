Node* reverseDLL(Node* head)
{   
    // Write your code here  
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev =NULL;
    Node* temp = head;
    while(temp!=NULL){
        prev = temp->prev;
        temp->prev = temp->next;
        temp->next= prev;
        temp = temp->prev;
    }
    return prev->prev;
}

