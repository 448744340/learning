#include<iostream>
#include<stack>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x),next(NULL){}
};

class Solution{
public:
    ListNode *result;
    int tail;
    ListNode* getKthFromEnd(ListNode* head,int k){

        if(k<=0) return head;
        if(head==NULL)
        {
            tail=0;
            return head;
        }
        if(head)
            getKthFromEnd(head->next,k);
        tail++;
        if(tail==k)
            result=head;
        return result;
    }
};

int main()
{
    ;
}
