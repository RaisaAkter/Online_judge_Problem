class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
a=Node(10)
b=Node(12)
c=Node(14)
Head=a
a.next=b
b.next=c
def traverse(head):
    currNode=head
    while currNode is not None:
        print (currNode.data)
        currNode=currNode.next
def insertBegin(head,value):
    newNode=Node(value)
    newNode.next=head
    head=newNode
    return head

def insertMiddle(head,value,newVal):
    currNode=head
    prevNode=None
    while currNode is not None:
        if currNode.data==value:
            newNode=Node(newVal)
            prevNode.next=newNode
            newNode.next=currNode
            break
        else:
            prevNode=currNode
            currNode=currNode.next

def insertEnd(head,newval):
    currNode=head
    while currNode!=None:
        prevNode=currNode
        currNode=currNode.next
    newNode=Node(newval)
    prevNode.next=newNode
    
Head=insertBegin(Head,7)
traverse(Head)
insertMiddle(Head,14,13)
traverse(Head)
insertEnd(Head,15)
traverse(Head)
