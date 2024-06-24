#include <iostream>
#include <string>

// Klasa bazowa Person
class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    virtual void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Klasa pochodna Employee
class Employee : virtual public Person {
protected:
    std::string company;
    double salary;

public:
    Employee(const std::string& name, int age, const std::string& company, double salary)
        : Person(name, age), company(company), salary(salary) {}

    void display() const override {
        Person::display();
        std::cout << "Company: " << company << ", Salary: " << salary << std::endl;
    }
};

// Klasa pochodna Student
class Student : virtual public Person {
protected:
    std::string university;
    std::string major;

public:
    Student(const std::string& name, int age, const std::string& university, const std::string& major)
        : Person(name, age), university(university), major(major) {}

    void display() const override {
        Person::display();
        std::cout << "University: " << university << ", Major: " << major << std::endl;
    }
};

// Klasa pochodna WorkingStudent (dziedziczenie wielobazowe)
class WorkingStudent : public Employee, public Student {
public:
    WorkingStudent(const std::string& name, int age, const std::string& company, double salary,
        const std::string& university, const std::string& major)
        : Person(name, age), Employee(name, age, company, salary), Student(name, age, university, major) {}

    void display() const override {
        Person::display();
        std::cout << "Company: " << company << ", Salary: " << salary << std::endl;
        std::cout << "University: " << university << ", Major: " << major << std::endl;
    }
};

int main() {
    WorkingStudent ws("John Doe", 25, "Tech Corp", 50000.0, "State University", "Computer Science");
    ws.display();

    return 0;
}
