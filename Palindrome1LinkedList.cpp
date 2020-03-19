#SUBMISSION 1:

bool isPalindrome(Node *head)
{
    int count=0;
    Node *p = head;
    while(p!=NULL){
        p = p->next;
        count++;
    }
    p = head;
    int k = count/2;
    while(k--){
        p = p->next;
    }
    Node *head1 = (struct Node*)malloc(sizeof(struct Node));
    if(count%2==1)
        head1 = p->next;
    else
        head1 = p;
    
    p = head;
        
    Node *q = head1;
    Node *prev = NULL;
    Node *nex = NULL;
    
    while(q!=NULL){
        nex = q->next;
        q->next = prev;
        prev = q;
        q = nex;
    }
    head1 = prev;
    while(head1!=NULL){
        if(head->data != head1->data)
            return 0;
        head=head->next;
        head1= head1->next;
    }
   
   return 1;
}

#SUBMISSION 2:USING STACK

bool isPalindrome(Node *head)
{
    stack<int>s;
    
    Node *h1 = head;
    Node *h2 = head;
    
    while(h1!=NULL && h1->next!=NULL){
        s.push(h2->data);
        h1 = h1->next->next;
        h2 = h2->next;
    }
    if(h1!=NULL){
        h2  = h2->next;
    }
    
    while(h2!=NULL){
        if(h2->data!=s.top())
            return 0;
        s.pop();
        h2 = h2->next;
    }
    return 1;
}
