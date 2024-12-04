Node* reverseDLL(Node* head)
{   
    // Write your code here  
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* back =NULL;
    Node* temp = head;
    while(temp!=NULL){
        back = temp->prev;
        temp->prev = temp->next;
        temp->next= back;
        temp = temp->prev;
    }
    return back->prev;
}
