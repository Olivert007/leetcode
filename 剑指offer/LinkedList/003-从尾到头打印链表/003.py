# -*- coding:utf-8 -*-

def printListFromToHead(self, listNode):
    stack, h = [], listNode
    while h:
        stack.append(h.val)
        h = h.next

    return stack[::-1]