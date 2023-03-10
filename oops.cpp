/* 
    OOPs, or Object-oriented programming is an approach or a 
    programming pattern where the programs are structured 
    around objects and classes.
*/

/* 
    There are some basic concepts that act as the building blocks of OOPs.

    Classes & Objects
    Abstraction
    Encapsulation
    Inheritance
    Polymorphism 
*/

/*
    Object - An Object can be defined as an entity that has a state and behavior,
    or in other words, anything that exists physically in the world is called 
    an object. It can represent a dog, a person, a table, etc.
*/

/*
    Class - Class can be defined as a blueprint of the object. It is basically
    a collection of objects which act as building blocks. 
    class contains Data members and Member functions.
*/

/* 
    Abstraction - Abstraction means displaying only essential information and hiding the details.
    Data abstraction refers to providing only essential information about the data 
    to the outside world, hiding the background details or implementation.
*/

/*
    Encapsulation - The wrapping up of data and functions 
    together in a single unit is known as encapsulation.
    It can be achieved by making the data members' scope
    private and the member function’s scope public to 
    access these data members. 
    Encapsulation makes the data non-accessible to the outside world.
    Two types - Data hiding, Data binding
*/

/*
    Inheritance - Inheritance is the process in which 
    two classes have an relationship among each 
    other and objects of one class acquire properties 
    and features of the other class. 
    The class which inherits the features is known 
    as the child class, and the class whose features 
    is inherited is called the parent class. 
    For example, Class Vehicle is the parent class, 
    and Class Bus, Car, and Bike are child classes.
    
    Types of Inheritance
        
        Single Inheritance 
        Multiple Inheritance 
        Multi-level Inheritance 
        Hybrid Inheritance 
        Hierarchical Inheritance
*/

/* 
    Polymorphism - Polymorphism is the ability of 
    any data to be processed in more than one form.
    There are 2 types of polymorphism 
    1.Compile Time --Function Overloading, Operator Overloading
    2.Run Time - Function Overriding
    
    Compile time - static or early binding, in this compiler decides what shape or value has to be taken by the entity in the picture.
    Run time - dynamic or late binding, in this shape or value has to be taken depends upon the execution. eg virtual functions.
*/

#include<bits/stdc++.h>
using namespace std;

// Class representing a shape with basic attributes
class Shape{
    protected:
        int width, heigth;

    public:
        void setWidth(int w){
            width = w;
        }

        void setHeigth(int h){
            heigth = h;
        }
};

// Class representing a rectangle, inheriting from Shape
class Rectangle: public Shape{
    public:
        int getArea(){
            return(width*heigth);
        }
};

//Class representing a triangle, inheriting from Shape
class Triangle: public Shape{
    public:
        int getArea(){
            return(width*heigth)/2;
        }
};

void printArea(Rectangle &rect){
    int area = rect.getArea();
    cout << "Area: " << area << endl;
}

void printArea(Triangle &tri){
     int area = tri.getArea();
    cout << "Area: " << area << endl;
}

int main(){
    
    // Creating object of rectangle class
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeigth(7);
    cout << "Rectangle: " << endl;
    printArea(rect);

    // Creating object of triangle class
    Triangle tri;
    tri.setWidth(5);
    tri.setHeigth(7);
    cout << "Triangle: " << endl;
    printArea(tri);

}

/* 
    Access specifiers/modifiers - Access Modifiers or 
    Access Specifiers in a class are used to assign the 
    accessibility to the class members, i.e., they set some 
    restrictions on the class members so that they can’t be 
    directly accessed by the outside functions.

    There are 3 types of access modifiers available in C++: 

    1. Public - Members declared as public can be accessed from outside the class. 
       They can be accessed by any code that has an instance of the class.

    2. Private - Members declared as private can only be accessed within the class.
       They cannot be accessed from outside the class.

    3. Protected - Members declared as protected are similar to private members 
       but can also be accessed by derived/friend classes.

    By default, all members of a class are private, unless explicitly declared otherwise. 
*/

/* 
    Constructor - A constructor is a special member function of a class that is automatically
    called when an object of that class is created. Constructors are used to initialize the object's state.

    Syntax :-
    className(){

    }

    There are mainly 3 types of Constructors
    1. Default Constructor - This is a constructor that takes no arguments. 
       It is automatically generated by the compiler if no other constructor 
       is defined in the class.

    2. Parameterized Constructor - This is a constructor that takes one or 
       more arguments. It is used to initialize the object's state with 
       specific values.

    3. Copy Construtor - This is a constructor that takes an object of the 
       same class as an argument. It is used to create a new object that is a 
       copy of an existing object.

    Destructor - Like a constructor, Destructor is also a member function of a class that 
    has the same name as the class name preceded by a tilde(~) operator. It helps to 
    deallocate the memory of an object. It is called while the object of the class is 
    freed or deleted. 

    Syntax :-

    ~className(){

    }

 */

/*  
    Function overloading - Function overloading is the ability of a class to have multiple
    functions with the same name but different parameters. The compiler can determine 
    which function to call based on the number and types of arguments passed to the function. 
    Function overloading can be useful in situations where the same operation can be performed 
    with different types of data. 

    Function overriding - Function overriding is the ability of a derived class to provide a 
    new implementation for a method that is already defined in its base class. The new 
    implementation in the derived class "overrides" the implementation in the base class. 
    Function overriding is a key feature of inheritance and polymorphism, as it allows a 
    derived class to modify the behavior of a method inherited from its base class.

    Operator overloading - This means C++ has the ability to provide the operators with a 
    special meaning for a data type, this ability is known as operator overloading. 
    For example, we can overload an operator '+' in a class like String so that we 
    can concatenate two strings by just using +.

*/
