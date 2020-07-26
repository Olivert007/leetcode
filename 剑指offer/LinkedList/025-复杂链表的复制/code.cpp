class Solution{
    public:
    void CloneNodes(RandomListNode* pHead)
    {
        while(pNode != NULL)
        {
            RandomListNode * pCloned = new RandomListNode(0);
            pCloned->label = pNode->label;
            pCloned->next = pNode->next;
            pCloned->random = NULL;

            pNode->next = pCloned;
            pNode = pCloned->next;
        }
    }

    void ConnectSibingNodes(RandomListNode* pHead)
    {
        RandomListNode* Node = pHead;
        while(pNode != NULL)
        {
            RandomListNode * pCloned = pNode->next;
            if(pNode->random != NULL)
            {
                pCloned->random = pNode->random->next;
            }
            pNode = pCloned->next;
        }
    }
    RandomListNode * ReconnectNodes(RandomListNode* pHead)
    {
        RandomListNode* pNode = pHead;
        RandomListNode* pClonedHead = NULL;
        RandomListNode* pClonedNode = NULL;

        if(pNode != NULL){
            pClonedHead = pClonedNode = pNode->next;
            pNode->next = pClonedNode->next;
            pNode = pNode->next;
        }

        while(pNode != NULL)
        {
            pClonedNode->next = pNode->next;
            pClonedNode = pClonedNode->next;
            pNode->next = pClonedNode->next;
            pNode = pNode->next;
        }
        return pClonedHead;
    }

    RandomListNode * Clone(RandomListNode* pHead)
    {
        CloneNodes(pHead);
        ConnectSilingNodes(pHead);
        return ReconnectNodes(pHead);
    }
};