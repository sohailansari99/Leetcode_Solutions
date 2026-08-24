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
    ListNode* mergeTwoLists(ListNode* Head1, ListNode* Head2) {
        if(Head1 == NULL || Head2 == NULL){
            return Head1==NULL ? Head2 : Head1;
        }

        if(Head1->val <= Head2->val){
            Head1->next = mergeTwoLists(Head1->next,Head2);
            return Head1;
        }else{
            Head2->next = mergeTwoLists(Head1, Head2->next);
            return Head2;
        }
    }
};