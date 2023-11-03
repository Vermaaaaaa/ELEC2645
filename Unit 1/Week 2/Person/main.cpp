//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "person.h"
#include "student.h"
#include "footballer.h"


int main() {
  // create a 'default' Person object
  Person person;
  // default person is called 'John'
  std::cout << person.get_forename() << std::endl;
  // we can assign all the object properties using a initialiser list
  person = {"Peter", "Rabbit", {17, Month::Apr, 1947}};
  // person is now called 'Peter'
  std::cout << person.get_forename() << std::endl;

  // can also create a specific person using the constructor
  Person another_person("Jane", "Smith", {23, Month::May, 1999});

  std::cout << another_person.get_forename() << " was born on "
            << another_person.get_dob() << std::endl;
    
   Person me("Rahul", "Verma", {19, Month::Apr, 2004});
   std::cout << me.get_forename() << "was born on"
             << me.get_dob() << std::endl;

  // Now create a student object
  Student student;
  // default student is called 'John' like the person
  std::cout << student.get_forename() << std::endl;
  // now we'll assign a profile to the student using a list
  student = {"Albert", "Einstein", {14, Month::Mar, 1879}, 201123456, 99.9};
  std::cout << student.get_forename() << " has an average of "
            << student.get_grade() << "\%. Wow! What a genius!\n";

  //Creating Footballer object
  Footballer footballer;
  std::cout << footballer.get_forename() << std::endl;
  footballer = {"Rahul", "Verma", {19, Month::Apr, 2004}, "Coventry City FC", 20, 5};
  std::cout << footballer.get_forename() << "has got " << footballer.get_goals() << "this season!" << std::endl;
  return 0;
}