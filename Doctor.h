using namespace std;

#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"
#include <vector>

class Patient;

class Doctor : public Person {
private:
    string specialty;
    vector<Patient> patients;

public:
    Doctor();
    Doctor(int id, string name, string specialty);
    
    string getSpecialty();
    void setSpecialty(string specialty);
    
    void addPatient(Patient p);
    vector<Patient> getPatients();
    
    
    void printInfo();
};

#endif

