class Car:

    def __init__(self,name,color,manu,year,cc):
        self.color=color
        self.name=name
        self.manufacturer=manu
        self.year=year
        self.cc=cc

    def start(self):
        print("car name:",self.name)
        print("car color:",self.color)
        print("starting the engine")
    def brake(self):
        print("break the car!!")

    def drive(self):
        print("drive the car")

    def turn(self):
        print("turn right or left")

    def change_gear(self):
        print("change the gear")
        


my_car=Car("Corolla","blue","abc",2018,1000)
my_car.start()
my_car.brake()
my_car.turn()



