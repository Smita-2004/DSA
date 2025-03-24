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
        ListNode* swapNodes(ListNode* head, int k) {
            ListNode* left = head;
            ListNode* right = head;
            int cnt = 0;
            
            while (left != nullptr) {
                cnt++;
                if (cnt == k) {
                    break;
                }
                left = left->next;
            }
            
            ListNode* pNode = left;
            while (pNode->next != nullptr) {
                pNode = pNode->next;
                right = right->next;
            }
          
            swap(left->val, right->val);
            
            return head;
        }
    }; 