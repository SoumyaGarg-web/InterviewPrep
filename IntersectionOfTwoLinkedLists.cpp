#SUBMISSION 1:
TIME COMPLEXITY:O(m+n)
SPACE COMPLEXITY:O(m)

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *p = headA;
        
        unordered_set<ListNode*>s;
        
        while(p!=NULL){
            s.insert(p);
            p=p->next;
        }
        
        while(headB!=NULL){
            if(s.count(headB))
                return headB;
            headB = headB->next;
        }
        
        return headB;
        
        
    }
};

#SUBMISSION 2:
TIME COMPLEXITY:O(m+n)
SPACE COMPLEXITY:O(1)

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *p =headA;
         ListNode *q =headB;
        
        while(p!=q){
            p = (p!=NULL)?p = p->next : p = headB;
            q = (q!=NULL)?q = q->next : q = headA;
        }
        
        return p;        
        
    }
};


#SUBMISSION 3:
TIME COMPLEXITY:O(m+n)
SPACE COMPLEXITY:O(1)

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *p =headA;
         ListNode *q =headB;
        
        int countp=0,countq=0,count;
        while(p!=NULL){
            countp++;
            p=p->next;
        }
        
        while(q!=NULL){
            countq++;
            q=q->next;
        }
        
        count = countp-countq;
        
        if(count>0){
            p = headA;
            q = headB;
        }
        else{
            p = headB;
            q = headA;
        }
        
        count = abs(count);
        for(int i=0;i<count;i++){
            p = p->next;
        }
        
        while(p && p!=q){
            p=p->next;
            q=q->next;
        }
        
        return p;
        
        
    }
};
