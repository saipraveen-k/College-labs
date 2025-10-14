class Animal:     
    def __init__(self, name): 
        self.name = name 
    def eat(self): 
        print(f"{self.name} is eating.") 
    def sleep(self): 
        print(f"{self.name} is sleeping.") 
class Dog(Animal): 
    def bark(self): 
        print(f"{self.name} says Woof!") 
class Cat(Animal):     
    def meow(self): 
        print(f"{self.name} says Meow!") 
dog1 = Dog("Buddy") 
cat1 = Cat("Whiskers") 
dog1.eat() 
dog1.sleep() 
cat1.eat() 
cat1.sleep()  
dog1.bark() 
cat1.meow() 