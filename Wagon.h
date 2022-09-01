#ifndef WAGON_H
#define WAGON_H
#include <string>
using namespace std;

// Class definition for a book
class Wagon
{
public:
    //constructors
    Wagon();
    
    //attributes
    string name;
    int age;

    //functions
    void setName(string capyName);
    void setAge(int capyAge);
    string getName();
    int getAge();

    //destructor 
    ~Capybara();
};
#endif //CAPYBARA_H