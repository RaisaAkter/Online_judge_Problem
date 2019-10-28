class Stack:
  
  def __init__(self):
    self.items = []
    
  #def isEmpty(self):
   # return len(self.items)
    
  def push(self, item):
    print ("pushing",item,"value")
    #self.items[len(self.items)]=item
    self.items=self.items+[item]
  
  def pop(self):
    if len(self.items)<=0:
      print ("empty stack,can't pop")
    else:
      print ("poping",self.items[len(self.items)-1],"from stack")
      del self.items[len(self.items)-1]
    
  def peek(self):
    print (self.items[len(self.items)-1])
  
  def getElements(self):
    return self.items
  
student = Stack()
student.push(3)
student.push(6)
student.push(9)
print (student.getElements())
student.pop()
print (student.getElements())
student.peek()
student.pop()
student.pop()
student.pop()
