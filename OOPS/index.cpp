#include <iostream>
using namespace std;

//! What is OOP?
/*
    OOP is a way of programming that organizes code into objects (real-world entities like Car, Student, BankAccount).
    Objects are created from classes (blueprints).
*/
//* key concepts 
/*
    Class → blueprint/template.
    Object → instance of class.
    Encapsulation → binding data & functions together.

    Access Specifiers →

    public → accessible everywhere
    private → accessible only inside the class
    protected → accessible inside class & subclasses
*/
   
//!Create a class Student with:
//! Private data: name, marks
//! Public function: setDetails(string n, int m) and showDetails()
/*
    class student{
        private:
        string name;
        int marks;
        public:
        void setDetails(string n, int m){
            name=n;
            marks=m;
        }
        void showDetails(){
            cout<<"your name is "<<name<<" and your marks are: "<<marks;
        }
    };
*/

//! Make a class Rectangle with:
    //! Private data: length, breadth
    //! A default constructor (set both = 1)
    //! A parameterized constructor (take user input)
    //! A function area() that returns the area of rectangle

/*    
    class Rectangle{
        private:
        int length,breadth;
        public:
        Rectangle(){
            length=1;
            breadth=1;
        }
        Rectangle(int len,int bred){
          length=len;
          breadth=bred;  
        }
        int area(){
            return length*breadth;
        }
    };
*/

//!Create a base class Person with:
    //! Protected data: name, age
    //! Public function: setPerson(string, int) and showPerson()
    //! Create a derived class Student with:
    //! Extra data: marks
    //! Function: setStudent(string, int, int) and showStudent() (show name, age, marks)

/*  
    class Person{
        protected:
        string name;
        int age;
        public:
        void setPerson(string Name,int Age){
            name=Name;
            age=Age;
        }
        void showPerson(){
            cout<<"name = "<<name<<" age = "<<age;
        }
    };

    class student:public Person{
        public:
        void setStudent(string Name,int Age){
            name=Name;
            age=Age;
        }
        void showStudent(){
                cout<<"name: "<<name<<" age: "<<age<<endl;
            }
            };
*/

//!Make a base class Shape with a virtual function area().
    //! Create 2 derived classes:
    //! Circle (take radius, area = π * r²)
    //! Rectangle (take length, breadth, area = l * b) 

/*

    class Shape{
        public:
        virtual void area(){
            cout<<"area";
        }
    };
    class Circle:public Shape{
        public:
        int radius;
        Circle(int r){
            radius=r;
        }
        void area() override{
            cout<<"area of circle is "<<3.14*radius*radius;
        }
    };
    class Rectangle:public Shape{
        public:
        int l,b;
        Rectangle(int length,int breadth){
            l=length;
            b=breadth;
        }
        void area() override{
            cout<<endl<<"area of Rectangle is "<<l*b;
        }
    };
*/    

//! Make a class hierarchy like this:
    //!Base class: Employee
    //!Data: name, salary
    //!Pure virtual function: work()
    //!Derived class: Developer
    //!Extra data: language
    //!work() → prints "Coding in <language>"
    //!Derived class: Manager
    //!Extra data: teamSize
/*
    class Employee{
        public:
        string name;
        int salary;
        virtual void work()=0;
        // “work() is an abstract function, every class that inherits from this base must write its own work().”
    };
    class Developer:public Employee{
        public:
        string lang;
        Developer(string language){
            lang=language;
        }
        void language(){
            cout<<"Developer speak "<<lang<<endl;
        }
        void work() override{
            cout<<"Coding in js,python,c++"<<endl;
        }
        
    };

    class Manager:public Employee{
        public:
        int number;
        Manager(int num){
            number=num;
        }
        void teamSize() {
            cout<<"Handle "<<number<<" member in a team..";
        }
         void work() override{
            cout<<"Manager manage "<<number<<" member in a team";
        }
    };
*/

int main(){
    //! 1 
        // student1.name="anmol123";
        // student1.setDetails("Anmol",441);
        // student1.showDetails();

    //! 2 
        // Rectangle R1; //* default constructor
         // cout<<R1.area();//1
        // Rectangle R2(10,20);//* parameterized constructor
        // cout<<R2.area();//200 
    
    //! 3
        // Person P1;
        // P1.setPerson("Person",123);
        // P1.showPerson();

        // student s1;
        // s1.setPerson("anmol",23);//inherited from person
        // s1.showStudent();

    //!4
        // Shape* s1=new Circle(20);//"s1 is a pointer to Shape, and it points to a Circle object (with radius 20) created in heap memory."
        // s1->area();//It is used when you have a pointer to an object and want to access its members (functions or variables).
        // Shape *s2=new Rectangle(10,20);
        // s2->area();
        //  delete s1;   
        //  delete s2;   
    
    //!5
        // Employee *E1=new Developer("Telugu");
        // Employee *E2=new Manager(100);
        // E1->language;//error
        // E1->work();
        // E2->work();

    //!
        return 0;
}