class RandomListNode:
    def __init__(self, x)
    self.label = x
    self.next = None
    self.random = None


def Clone(pHead):
    if not pHead:
        return None
    
    p = pHead
    new_h = RandomListNode(p.label)
    pre_p = new_h
    random_map = {pHead:new_h}
    p = p.next
    while p:
        new_p = RandomListNode(p.label)
        random_map[p] = new_p
        pre_p.next = new_p
        pre_p =pre_p.next
        p = p.next
    p = pHead
    new_p = new_h
    while p:
        random_p = p.random
        if random_p:
            new_p.random = random_map[random_p]
        p = p.next
        new_p = new_p.next