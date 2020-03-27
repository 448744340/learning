#include<stdio.h>

using namespace std;

struct ListNode{
    int val;
    struct ListNode *next;
    ListNode (int x) : val(x),next(NULL) {}
};

class Solution{
public:
    ListNode* reverseList(ListNode* head,int m, int n)
    {
        if(m>=n)
            return head;
        ListNode* cur=head;
        ListNode* pre=NULL;
        ListNode* temp=cur;
        ListNode* pre0;
        ListNode *cur0;
        int count=1;
        while(cur)
        {
            if(count==m)
            {
                pre0=pre;
                cur0=cur;
                pre=cur;
                cur=cur->next;
            }
            else if(count>m && count<n)
            {
                temp=cur->next;
                cur->next=pre;
                pre=cur;
                cur=temp;
            }
            else if(count==n)
            {
                temp = cur->next;
                cur->next=pre;
                if(pre0==NULL)
                {
                    head=cur;
                }
                else
                {
                    pre0->next=cur;
                }
                cur0->next=temp;
                pre=cur0;
                cur=cur0->next;
            }
            else
            {
                pre=cur;
                cur=cur->next;
            }
            count++;
        }
        return head;
    }
};
