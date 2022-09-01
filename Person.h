#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

// Class definition for a book
class Person
{
public:
    //constructors
    Person();
    Person(int mySalary, string myName); // a name and salary must be provided to create a Person
    
    //attributes
    string name;
    int salary;

    //functions
    void setName(string myName);
    void setSalary(int mySalary);
    string getName();
    int getSalary();

    //destructor 
    ~Person();
};
#endif //PERSON_H