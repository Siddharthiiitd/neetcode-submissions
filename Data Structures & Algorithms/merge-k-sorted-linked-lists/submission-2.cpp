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
    struct compare{
        bool operator()(ListNode* a, ListNode* b){
            return a->val > b->val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> Q;
        for(int i=0; i<lists.size(); i++){
            if(lists[i]){
                Q.push(lists[i]);
            }
        }
        if(Q.empty()) return nullptr;

        ListNode dummy(0);
        ListNode* temp = &dummy;

        while(!Q.empty()){
            ListNode* node = Q.top();
            Q.pop();
            temp->next=node;
            temp = temp->next;
            if(node->next){
                Q.push(node->next);
            }
        }
        return dummy.next;
    }
};
