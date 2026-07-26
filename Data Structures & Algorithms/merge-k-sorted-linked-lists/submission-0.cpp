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
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val; // min-heap
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> Q;

        for(int i=0; i<lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp){
                Q.push(temp);
                temp=temp->next;
            }
        }
        if(Q.empty()) return nullptr;
        ListNode* ans = Q.top();
        ListNode* temp = ans;
        Q.pop();
        while(!Q.empty()){
            temp->next = Q.top();
            Q.pop();
            temp = temp->next;
        }
        return ans;

    }
};
