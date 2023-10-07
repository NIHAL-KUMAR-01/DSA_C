#include <iostream>

using namespace std;

// Base class
class Base {
public:
    void display() {
        cout << "Base class" << endl;
    }
};

// Derived class for Single Inheritance
class SingleInheritance : public Base {
public:
    void display() {
        cout << "Single Inheritance" << endl;
    }
};

// Derived classes for Multiple Inheritance
class ClassA {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class ClassB {
public:
    void display() {
        cout << "Class B" << endl;
    }
};

class MultipleInheritance : public ClassA, public ClassB {
public:
    void display() {
        cout << "Multiple Inheritance" << endl;
    }
};

// Derived class for Multipath Inheritance
class Parent {
public:
    void display() {
        cout << "Parent" << endl;
    }
};

class Child1 : public Parent {
};

class Child2 : public Parent {
};

class MultipathInheritance : public Child1, public Child2 {
};

// Derived classes for Hierarchical Inheritance
class ChildA : public Base {
};

class ChildB : public Base {
};

// Derived class for Multilevel Inheritance
class Grandparent {
public:
    void display() {
        cout << "Grandparent" << endl;
    }
};

class ParentA : public Grandparent {
};

class MultilevelInheritance : public ParentA {
};

// Hybrid Inheritance (Combination of above types)

int main() {
    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Single Inheritance" << endl;
        cout << "2. Multiple Inheritance" << endl;
        cout << "3. Multipath Inheritance" << endl;
        cout << "4. Hierarchical Inheritance" << endl;
        cout << "5. Multilevel Inheritance" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    SingleInheritance obj;
                    obj.display();
                    break;
                }
            case 2:
                {
                    MultipleInheritance obj;
                    obj.ClassA::display();
                    obj.ClassB::display();
                    obj.display();
                    break;
                }
            case 3:
                {
                    MultipathInheritance obj;
                    obj.Child1::display();
                    obj.Child2::display();
                    obj.display();
                    break;
                }
            case 4:
                {
                    ChildA objA;
                    ChildB objB;
                    objA.display();
                    objB.display();
                    break;
                }
            case 5:
                {
                    MultilevelInheritance obj;
                    obj.display();
                    break;
                }
            case 6:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}
