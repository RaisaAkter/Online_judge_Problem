Books = {"math":["self:1","row:1"],"english":["self:1","row:2"],"physics":["self:1","row:3"],"ict":["self:1","row:4"]}
number_of_books = {"math":0,"english":1,"physics":15,"ict":20}
class Library:
    def __init__(self,name):
        self.name=name
        print ("Welcome to",self.name,"library")
    def add_book(self,book,position,number):
        Books[book]=[position]
        number_of_books[book]=number
        print ("Added",book,"into library")
class Student:
    def __init__(self,name):
        self.name=name
        
    def borrowBook(self,book):
        for name in Books:
            if book==name and number_of_books[book]!=0:
                print ("The book is in ",Books[name])
                number_of_books[name]-=1
                break
            elif number_of_books[book]==0: 
                print ("Sorry! the book is not available at that moment.")
                break
        
     
    
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
                print ("the book is in our library")
                c=c+1
        if c==0:
            print ("The book is not in our library")
            
library=Library("MIU")
library.add_book("phychology","self:3,row:1",10)
student=Student(input("Your name?? "))
ques = input("for borrow the book type 'b' , for return the book type 'r' and to search the book type 's': ")
ques=ques.lower()

if ques=='b':
        name_book=input("tell me the name of book: ")
        name_book=name_book.lower()
        student.borrowBook(name_book)
if ques=='r':
        name_book=input("tell me the name of book that you want to return: ")
        name_book=name_book.lower()
        student.returnBook(name_book)
if ques=='s':
    name_book=input("tell me the name of book that you want to search: ")
    name_book=name_book.lower()
    student.searchBook(name_book)
