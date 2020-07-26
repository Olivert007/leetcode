/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeofLoop(ListNode * pHead){
        if(pHead == NULL){
            return NULL;
        }

        ListNode *meetingnode  =MeetingNode(pHead);
        if(meetingnode == NULL)
        {
            return NULL;
        }

        int nodesloop = 1;
        ListNode* pNode1 = meetingnode;
        while(pNode1->next != meetingnode)
        {
            pNode1 = pNode1->next;
            nodesloop++;
        }
        pNode1 = pHead;
        for(int i = 0; i < nodesloop; i++)
        {
            pNode1 = pNode1->next;
        }

        ListNode * pNode2 = pHead;
        while(pNode1 != pNode2){
            pNode1 = pNode1->next;
            pNode2 = pNode2->next;
        }
        return pNode1;
    }


private:

    ListNode * MeetingNode(ListNode * pHead)
    {
        ListNode *pSlow = pHead->next;
        if(pSlow == NULL){
            return NULL;
        }

        ListNode * pFast = pSlow->next;
        while(pFast != NULL && pSlow != NULL){
            if(pFast == pSlow){
                return pFast;
            }

            pSlow = pSlow->next;
            pFast = pFast->next;
            if(pFast != NULL){
                pFast = pFast->next;
            }
        }
        return NULL;
    }
}