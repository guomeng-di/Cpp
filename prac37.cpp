//86. 分隔链表 重要
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* leftHead=nullptr,* leftTail=nullptr;//小头小尾
        ListNode* rightHead=nullptr,* rightTail=nullptr;//大头大尾
        ListNode* next=nullptr;//next存下一个数据的地址
        while(head!=nullptr){//head是原链表的当前数据
        next=head->next;
        head->next=nullptr;//切断与原链表的联系

        if(head->val<x){//两种情况
        if(leftHead==nullptr) leftHead=head;//第一个
        else leftTail->next=head;//已有头节点
        leftTail=head;//尾节点指向当前最后数据(更新)
        }else{
            if(rightHead==nullptr) rightHead=head;
            else rightTail->next=head;
            rightTail=head;
        }
        head=next;//处理下一个数据
        }
        if(leftHead==nullptr) return rightHead;
        else{
            leftTail->next=rightHead;
            return leftHead;
        }
    }
};
