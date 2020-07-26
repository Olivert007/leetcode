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
    ListNode * deleteDupLication(ListNode* pHead)
    {
        if(pHead == NULL)
        {
            return NULL;
        }

        ListNode* pPre = NULL;
        ListNode* pCur pHead;
        ListNode* pNext = NULL;

        while(pCur != NULL){
            if(pCur->next != NULL && pCur->val = pCur->next->val){
                pNext = pCur->next;

                while(pNext->next != NULL && pNext->next->val == pCur->val){
                    pNext = pNext -> next;
                }

                if(pCur == pHead){
                    pHead = pHead->next;
                }
                else{
                    pPre->next = pNext->next;
                }
                pCur = pNext->next;
            }
            else{
                pPre = pCur;
                pCur = pCur->next;
            }
        }
        return pHead;
    }


}