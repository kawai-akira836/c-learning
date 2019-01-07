#include <iostream>
#include <string>
using namespace std;
#include "Healthchecker.h"

//implement a member function which returns BMI
double HealthChecker::getBmi() {
  //calculate a BMI if it is still not done
  if (this->bmi == 0){
    double mHeight = this->height / 100;
    this->bmi = this->weight / mHeight / mHeight;
  }

  //return the bmi
  return this->bmi;
}

//implement a member function which returns its name
string HealthChecker::getName() {
  return this -> name;
}

//implement the constructor
HealthChecker::HealthChecker(string name, double height, double weight){
  //configure initial numbers of member vals.
  this->name = name;
  this->height = height;
  this->weight = weight;
  this->bmi = 0;

}
