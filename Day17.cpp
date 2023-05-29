//61. Rotate List
//Given the head of a linked list, rotate the list to the right by k places.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)                     
            return head;
        ListNode* temp = head;
        
        int len = 0;
        ListNode* prev = NULL;
        
        while (temp != NULL) {
            
            prev = temp;
            temp = temp->next;  
            len++;
        }
        temp = prev;
        temp->next = head;
        temp = head;
        
        for(int i=0; i<len - (k % len) - 1; i++) {
            temp = temp->next;
        }
        
        head = temp->next;
        temp->next = NULL;
        
        return head;
    }
    
};
