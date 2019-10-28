class ListNode:
    def __init__(self,data):
        self.data=data
        self.next=None

Node1=ListNode(11)
Node2=ListNode(21)
Node3=ListNode(31)
head=Node1
Node1.next=Node2
Node2.next=Node3

def traversal(head):
    fNode=head
    while fNode is not None:
        print (fNode,fNode.data)
        fNode=fNode.next
        
traversal(head)
