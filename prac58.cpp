//2. 两数相加
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=nullptr;//最终结果
        ListNode* cur=nullptr;
        int carry=0;//进位
        while(l1!=NULL||l2!=NULL){
            int sum=(l1==NULL?0:l1->val)+(l2==NULL?0:l2->val)+carry;
            int vall=sum%10;
            carry=sum/10;
            if(ans==NULL){
                ans=new ListNode(vall);
                cur=ans;
            }else{
                cur->next=new ListNode(vall);
                cur=cur->next;
            }
            l1=(l1==NULL?NULL:l1->next);
            l2=(l2==NULL?NULL:l2->next);
        }
        if(carry) cur->next=new ListNode(carry);
        return ans;
    }
};