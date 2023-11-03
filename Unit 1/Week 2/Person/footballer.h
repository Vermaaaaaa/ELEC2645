#ifndef FOOTBALLER_H
#define FOOTBALLER_H
#include "person.h"
#include <string>

class Footballer : public Person{
    public:
    //constructor
    Footballer();
    Footballer(std::string forename, std::string surname, Date dob, std::string club,
          uint8_t goals, uint8_t appearances);
    //mutators
    void set_club(std::string club);
    void set_goals(uint8_t goals);
    void set_appearances(uint8_t appearances);
    //Accessors
    std::string get_club();
    uint8_t get_goals();
    uint8_t get_appearances();
    private:
    std::string _club;
    uint8_t _goals;
    uint8_t _appearances;
};





#endif