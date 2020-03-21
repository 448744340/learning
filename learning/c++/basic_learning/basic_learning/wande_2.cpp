#include<iostream>

using namespace std;

struct ListNode{
    int value;
    struct ListNode *next;
    ListNode(int x) :value(x),next(NULL){}
};

ListNode * create_list_node(int value)
{
    ListNode * pNode=new ListNode(value);
    return pNode;
}

void connect_list_node(ListNode *pCur,ListNode *pNext)
{
    pCur->next=pNext;
}

bool f(ListNode *A)
{
    ListNode *pSlow=A;
    ListNode *pFast=A;


    while(pFast!=NULL &&pSlow->next!=NULL)
    {
        pSlow=pSlow->next;
        pFast=pFast->next;
    }

    ListNode *prev=pSlow;
    pSlow = pSlow->next;
    prev->next=NULL;
    while(pSlow !=NULL)
    {
        ListNode *tmp =pSlow->next;
        pSlow ->next=prev;
        prev=pSlow;
        pSlow=tmp;
    }


    ListNode *pForward =A;
    ListNode *pBackward =prev;

    while(!(pForward == pBackward ||pForward->next ==pBackward))
    {
        if(pForward->value !=pBackward->value)
            return false;
        pForward=pForward->next;
        pBackward=pBackward->next;
    }
    return true;
}
