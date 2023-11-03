#include "footballer.h"

//constructor (default)
Footballer::Footballer() : Person(), _goals{0}, _appearances{0}, _club{"Coventry City FC"} {}
//constructor (user-specified)
Footballer::Footballer(std::string forename, std::string surname, Date dob, std::string club,
          uint8_t goals, uint8_t appearances)
          : Person{forename, surname, dob}, _club{club}, _appearances{appearances}, _goals{goals} {}

// mutators
void Footballer::set_goals(uint8_t goals) { _goals = goals; }
void Footballer::set_appearances(uint8_t appearances) { _appearances = appearances; }
void Footballer::set_club(std::string club) { _club = club; }

// accessors
uint8_t Footballer::get_goals() { return _goals; }
uint8_t Footballer::get_appearances() { return _appearances; }
std::string Footballer::get_club() { return _club; }