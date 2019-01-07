#include <iostream>
#include <string>
using namespace std;
#include "Healthchecker.h"

int main(int argc, char const *argv[]) {
  // make an instance of HealthChecker class
  HealthChecker yamada("山田一郎", 170, 67.5);

  //display the BMI
  cout << "BMI of " << yamada.getName() << " is " << yamada.getBmi() << "." << endl;

  return 0;
}
