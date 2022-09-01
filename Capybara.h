#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <string>
using namespace std;

// Class definition for a book
class Capybara
{
public:
    //constructors
    Capybara();
    
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