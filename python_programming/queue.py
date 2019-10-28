class Queue:
    def __init__(self):
        self.items=[]

    def isEmpty(self):
        if len(self.items)<=0:
            return True
        else:
            return len(self.items)
    def enqueue(self,item):
        print ("Adding",item)
        self.items=self.items+[item]

    def dequeue(self):
        if len(self.items)<=0:
            print ("empty queue")
        else:
            print ("Dequeued",self.items[0])
            del self.items[0]

    def getElements(self):
        print (self.items)
        
Q=Queue()
Q.enqueue(3)
Q.enqueue(4)
Q.enqueue(5)
Q.dequeue()
Q.getElements()
print(Q.isEmpty())
