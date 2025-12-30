using namespace std;

#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
#include <vector>

class Hospital {
private:
    vector<Patient> patients;
    vector<Doctor> doctors;
    vector<Appointment> appointments;

public:
    Hospital();
    
    void addPatient(Patient p);
    void addDoctor(Doctor d);
    void addAppointment(Appointment a);
    
    void showAllPatients();
    void showAllDoctors();
    void showAllAppointments();
    
    
    Patient* findPatient(int id);
    Doctor* findDoctor(int id);
};

#endif

