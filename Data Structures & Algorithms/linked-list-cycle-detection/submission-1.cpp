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
    bool hasCycle(ListNode* head) {
        unordered_map<ListNode*,int>note;
        ListNode *curr=head;
        while(curr!=nullptr){
            auto it=note.find(curr);

            if(it!=note.end()){
                return true;
            }

            note[curr]=curr->val;
            curr=curr->next;
            

        }
        return false;
    }
};
