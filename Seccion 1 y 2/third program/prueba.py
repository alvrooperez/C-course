

a=10
b=a*50
print("The value of a is: ",a)


class MyClass:
    def __init__(self, name):
        self.name = name

    def greet(self):
        print("Hello, " + self.name + "!")



alice=MyClass("Alice")
alice.greet()
