#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <string>
using namespace std;

class Musician{
    public:
        Musician();
        Musician(string instrument, int experience);

        string get_instrument();
        int get_experience();

        string theInstrument;
        int theExperience;

        ~Musician();
};
#endif