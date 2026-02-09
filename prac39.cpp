//单链表及其反转
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr) {}// 构造函数：方便初始化节点
};
class LinkedList {
private:
    ListNode* head; // 头节点指针
public:
    LinkedList() : head(nullptr) {}// 构造函数：初始化空链表
    ~LinkedList() {//析构函数 用于对象销毁时清理资源
        ListNode* current = head;
        while (current != nullptr) {
            ListNode* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
    void append(int value) {//在链表末尾添加元素
        ListNode* newNode = new ListNode(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void printList() const {//打印链表内容
        ListNode* temp = head;
        while (temp != nullptr) {
            cout << temp->val;
            if (temp->next != nullptr) {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
    void reverseIterative() {//反转链表
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while (curr != nullptr) {
            next = curr->next; // 1. 保存下一个节点
            curr->next = prev; // 2. 反转当前节点的指针
            prev = curr;       // 3. prev 指针后移
            curr = next;       // 4. curr 指针后移
        }
        head = prev; // 5. 最后 prev 指向新的头节点
    }
};
int main() {
    // 1. 创建链表并添加元素
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    cout << "原始链表: ";
    list.printList(); // 输出: 1 -> 2 -> 3 -> 4 -> 5
    list.reverseIterative();
    cout << "反转后: ";
    list.printList(); // 输出: 5 -> 4 -> 3 -> 2 -> 1

    return 0;
}