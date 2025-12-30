using namespace std;

#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include "Patient.h"
#include "Doctor.h"
#include <string>

class Appointment {
private:
    Patient patient;
    Doctor doctor;
    string date;

public:
    Appointment();
    Appointment(Patient patient, Doctor doctor, string date);
    
    Patient getPatient();
    void setPatient(Patient patient);
    
    Doctor getDoctor();
    void setDoctor(Doctor doctor);
    
    string getDate();
    void setDate(string date);
    
    
    void printInfo();
};

#endif

