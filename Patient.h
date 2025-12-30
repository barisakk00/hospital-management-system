using namespace std;

#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"

class Patient : public Person {
private:
    int age;
    string illness;

public:
    Patient();
    Patient(int id, string name, int age, string illness);
    
    int getAge();
    void setAge(int age);
    
    string getIllness();
    void setIllness(string illness);
    
    
    void printInfo();
};

#endif

