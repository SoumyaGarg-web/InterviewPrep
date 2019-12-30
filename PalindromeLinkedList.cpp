#SUBMISSION 1:
TLE(NOT ACCEPTED)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 ........................
 
 
 
 
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        int flag=0;
        ListNode *p = head;
        ListNode *head1=NULL;
        
        head1 = reverse(head);
          
        ListNode *q=head1;
        
        while(p!=NULL){
             if(p->val!=q->val){
                flag=1;
                break;
            }
        }
 
        return (flag==0);
        
    }
    
  ListNode *reverse(ListNode *head){
        
        ListNode  *curr = head;
           ListNode  *n = NULL;
           ListNode *prev = NULL;
        
        while(curr != NULL)
        {
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        
        head = prev;
        return head;
    }
    
};


#SUBMISSION 2:
Time Complexity:O(n)
Space Complexity:O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 ........................
 
 
 
 
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode *slow=head;
        ListNode *fast= head;
        
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        // IN CASE OF ODD LENGTH
        if(fast)
            slow=slow->next;
        
        ListNode *curr = slow;
        ListNode *prev = NULL;
        ListNode *n= NULL;
        
        while(curr){
            n = curr->next;
            curr->next=prev;
            prev = curr;
            curr = n;
        }
        
        curr = prev;
        
        while(curr){
            if(curr->val==head->val){
                curr = curr->next;
                head = head->next;
            }
            else
                return false;
        }
        return true;
    }
    
};
