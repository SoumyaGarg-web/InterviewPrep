#SUBMISSION 1:

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
       ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
        dummy->next=head;
        
        ListNode *first = dummy;
           ListNode *second = dummy;
        
        for(int i=1;i<=n+1;i++){
            first = first->next;
        }
        
        while(first!=NULL){
            first=first->next;
            second = second->next;
        }
        
        second->next = second->next->next;
        return dummy->next;
    }
};

#SUBMISSION 2:

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count =0;
        ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
        dummy->next=head;
        
        ListNode *t = dummy;
        ListNode *p = head;
        
        while(p!=NULL){
            count++;
            p = p->next;
        }
        
        for(int i=1;i<=count-n;i++){
            t=t->next;
        }
        
        t->next = t->next->next;
        return dummy->next;
        
    }
};
