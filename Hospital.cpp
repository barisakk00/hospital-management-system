#include "Hospital.h"

using namespace std;

Hospital::Hospital() {}

void Hospital::addPatient(Patient p) {
    patients.push_back(p);
    cout << "Patient added." << endl;
}

void Hospital::addDoctor(Doctor d) {
    doctors.push_back(d);
    cout << "Doctor added." << endl;
}

void Hospital::addAppointment(Appointment a) {
    appointments.push_back(a);
    cout << "Appointment added." << endl;
}

void Hospital::showAllPatients() {
    if (patients.size() == 0) {
        cout << "No patients found." << endl;
        return;
    }
    cout << "\n=== All Patients ===" << endl;
    for (int i = 0; i < patients.size(); i++) {
        patients[i].printInfo();
    }
}

void Hospital::showAllDoctors() {
    if (doctors.size() == 0) {
        cout << "No doctors found." << endl;
        return;
    }
    cout << "\n=== All Doctors ===" << endl;
    for (int i = 0; i < doctors.size(); i++) {
        doctors[i].printInfo();
    }
}

void Hospital::showAllAppointments() {
    if (appointments.size() == 0) {
        cout << "No appointments found." << endl;
        return;
    }
    cout << "\n=== All Appointments ===" << endl;
    for (int i = 0; i < appointments.size(); i++) {
        appointments[i].printInfo();
    }
}

Patient* Hospital::findPatient(int id) {
    for (int i = 0; i < patients.size(); i++) {
        if (patients[i].getId() == id) {
            return &patients[i];
        }
    }
    return NULL;
}

Doctor* Hospital::findDoctor(int id) {
    for (int i = 0; i < doctors.size(); i++) {
        if (doctors[i].getId() == id) {
            return &doctors[i];
        }
    }
    return NULL;
}
