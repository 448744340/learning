#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL){}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* half_front_head = new ListNode(0);
        ListNode* half_back_head = new ListNode(0);
        ListNode* half_front = half_front_head;
        ListNode* half_back = half_back_head;
        ListNode* p=head;

        while(p)
        {
            if(p->val >= x)
            {
                if(half_back_head->next == NULL)
                {
                    half_back_head->next = p;
                    half_back =p;
                }
                else
                {
                    half_back ->next = p;
                    half_back =p;
                }
            }
            else if(p->val <x)
            {
                if(half_front_head->next == NULL)
                {
                    half_front_head->next = p;
                    half_front =p;
                }
                else
                {
                    half_front ->next = p;
                    half_front =p;
                }
            }
            p=p->next;
        }

        half_front->next = half_back_head->next;
        half_back->next = NULL;

        p=half_front_head->next;
        return p;

    }
};


int main()
{
    Solution s;
    cout<<"head = ";
    int i;

}
