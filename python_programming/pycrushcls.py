class Restaurant:
    def __init__(self,restaurant_name,cuisine_type):
        self.restaurant_name=restaurant_name
        self.cuisine_type=cuisine_type
        self.number_served=0
    def describe_restaurant(self):
        print("This is",self.restaurant_name,"and it is",self.cuisine_type,"type cuisine")
    def open_restaurant(self):
        print("OPEN")
    def set_number_served(self,number):
        self.number_served=number
    def increment_number_served(self,number):
        self.number_served=self.number_served+number
class User:
    def __init__(self,first_name,last_name):
        self.first_name=first_name
        self.last_name=last_name
        self.login_attempts=0
    def increment_login_attempts(self):
        self.login_attempts=self.login_attempts+1
    def reset_login_attempts(self):
        self.login_attempts=0
    def describe_user(self):
        print("This is",self.first_name,self.last_name)
    def greet_user(self):
        print("Hello",self.first_name,self.last_name)
user=User("raisa", "akter")
user.describe_user()
user.greet_user()
user.increment_login_attempts()
print(user.login_attempts)
user.reset_login_attempts()
print(user.login_attempts)

restaurant=Restaurant("Mardi grass", "chinese")
#print(restaurant.restaurant_name)
#print(restaurant.cuisine_type)
restaurant.describe_restaurant()
#restaurant.open_restaurant()
#restaurant1=Restaurant("La bon quisin", "chinese")
#restaurant2=Restaurant("Iqra", "chinese")
#restaurant1.describe_restaurant()
#restaurant2.describe_restaurant()
print(restaurant.number_served)
restaurant.number_served=2
print(restaurant.number_served)
restaurant.set_number_served(4)
print(restaurant.number_served)
restaurant.increment_number_served(6)
print(restaurant.number_served)
