class HealthChecker {
  private:
    static const int STD_BMI;
    string name;    //member val containing a name
    double height;  //member val containing a height
    double weight;  //member val containing a weight
    double bmi;     //member val containing a bmi

  public:
    static int getStdBmi();  //member func which returns STD_BMI
    double getStdWeight();  //member func which returns the standard weight
    double getBmi();  //member func which returns the bmi
    string getName(); //member func which returns the name
    HealthChecker(string name, double height, double weight); //constructor
};
