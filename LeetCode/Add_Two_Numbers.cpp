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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> num1, num2, ans;
        
        while(l1 != NULL) {
            num1.push_back(l1 -> val);
            l1 = l1 -> next;
        }

        while(l2 != NULL) {
            num2.push_back(l2 -> val);
            l2 = l2 -> next;
        }

        int i = 0, c = num1.size(),
            d = num2.size(), cry = 0;
        
        for(i = 0; i < min(c, d); i++) {
            int s = cry + num1[i] + num2[i];

            if(s > 9) {
                ans.push_back(s % 10);
                cry = 1;
            } else {
                ans.push_back(s);
                cry = 0;
            }
        }

        for(int j = i; j < c; j++) {
            int s = cry + num1[j];

            if(s > 9) {
                ans.push_back(s % 10);
                cry = 1;
            } else {
                ans.push_back(s);
                cry = 0;
            }
        }


        for(int j = i; j < d; j++) {
            int s = cry + num2[j];

            if(s > 9) {
                ans.push_back(s % 10);
                cry = 1;
            } else {
                ans.push_back(s);
                cry = 0;
            }
        }

        if(cry) ans.push_back(1);

        ListNode* root = new ListNode(ans[0]);
        ListNode* tp = root;

        for(i = 1; i < ans.size(); i++) {
            ListNode* node = new ListNode(ans[i]);
            tp -> next = node; tp = node;
        }

        return root;
    }
};