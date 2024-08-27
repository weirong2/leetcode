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
    bool hasCycle(ListNode *head) {
        auto p=head;
        list<ListNode> t;
        list<ListNode>::iterator x;
        if (head) t.push_back(*head);
        while (p && p->next) {
            /*
            cout << "ta: (size):" << t.size() << " [";
            for (x = t.begin(); x != t.end(); ++x) {
                cout << x->val << " ";
            }
            cout << "]" << endl;
            */

            for (x = t.begin(); x != t.end(); ++x) {
                if (tie(p->next->val, p->next->next) == tie(x->val, x->next)) return true;
            }

            //cout << "p->next->val: " << p->next->val << endl;
            t.push_back(*p->next);

            /*
            cout << "tb: (size):" << t.size() << " [";
            for (x = t.begin(); x != t.end(); ++x) {
                cout << x->val << " ";
            }
            cout << "]" << endl;
            */
            p = p->next;
        }
        return false;
    }
};