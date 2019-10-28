Books = {"math":["self:1","row:1"],"english":["self:1","row:2"],"physics":["self:1","row:3"],"ict":["self:1","row:4"]}
number_of_books = {"math":10,"english":11,"physics":20,"ict":20}
Book_borrower=[] #librarian can see who took books

class Library:   #creating a library type object
    def __init__(self,name):
        self.name=name
        print ("Welcome to",self.name,"library")
    def add_book(self,book,position,number):
        Books[book]=[position]
        number_of_books[book]=number
        print ("Added",book,"into library")
class Student:   #creating a student type object
    def __init__(self,name):
        self.name=name
        
    def borrowBook(self):
        book_list=Stack()
        Book_borrower.append(self.name)
        ch='y'
        while ch=='y':
            book=input("tell me the name of book: ")
            book=book.lower()
            for name in Books:
                if book==name and number_of_books[book]!=0:
                    print ("The book is in ",",".join(Books[name]))
                    book_list.push(book)
                    number_of_books[name]-=1
                    Book_borrower.append(book)
                    break
                elif book not in Books:
                    print("the word that you enter is not in our library,try again")
                    break
                elif number_of_books[book]==0: 
                    print ("Sorry! the book is not available at that moment.")
                    break
            ch=input("if you want another book type 'y': ")
        print (self.name,"took",",".join(book_list.getElements()))
    
    def returnBook(self,name):
        for book in number_of_books:
            if name==book:
                number_of_books[name]+=1
                print ("Thanks for returning the book")
                break
    def searchBook(self,book):
        c=0
        for name in Books:
            if book==name:
                print ("the book is in our library,you will get it in",",".join(Books[book]))
                c=c+1
        if c==0:
            print ("The book is not in our library")
class Stack():   #this class is for keeping a track that a student took how much book
  
  def __init__(self):
    self.items = []
    
  def push(self, item):
    return self.items.append(item)
  
  def pop(self):
    return self.items.pop()
  
  def getElements(self):
    return self.items #returning the names of book that student took
            
library=Library("MIU")
student=Student(input("Your name?? "))
ques = input("for borrow the book type 'b' , for return the book type 'r' and to search the book type 's': ")
ques=ques.lower()

if ques=='b':
        student.borrowBook()
elif ques=='r':
        name_book=input("tell me the name of book that you want to return: ")
        name_book=name_book.lower()
        student.returnBook(name_book)
elif ques=='s':
    name_book=input("tell me the name of book that you want to search: ")
    name_book=name_book.lower()
    student.searchBook(name_book)
else:
    print("You entered wrong key,please try again")


