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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        int ans=0,l=0;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int k=v.size()-1;
        while(k>=0){
            ans+=pow(2,l)*v[k];
            l++;
            k--;
        }
        return ans;
    }
};