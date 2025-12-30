#include "Hospital.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "\n========================================" << endl;
    cout << "  HOSPITAL MANAGEMENT SYSTEM" << endl;
    cout << "========================================" << endl;
    cout << "Baris AK | Kerem Emre ESLEMEZ" << endl;
    cout << "5003240010 | 5003240017" << endl;
    cout << "Object Oriented Programming Term Project" << endl;
    cout << "Istanbul University" << endl;
    cout << "========================================\n" << endl;
    
    Hospital hospital;
    int choice = -1;
    
    while (choice != 0) {
        cout << "\n=== MENU ===" << endl;
        cout << "1) Add Patient" << endl;
        cout << "2) Add Doctor" << endl;
        cout << "3) Add Appointment" << endl;
        cout << "4) List All Patients" << endl;
        cout << "5) List All Doctors" << endl;
        cout << "6) List All Appointments" << endl;
        cout << "0) Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        
        if (choice == 1) {
            int id, age;
            string name, illness;
            
            cout << "Patient ID: ";
            cin >> id;
            cin.ignore();
            cout << "Patient Name: ";
            getline(cin, name);
            cout << "Patient Age: ";
            cin >> age;
            cin.ignore();
            cout << "Illness: ";
            getline(cin, illness);
            
            Patient p(id, name, age, illness);
            hospital.addPatient(p);
        }
        else if (choice == 2) {
            int id;
            string name, specialty;
            
            cout << "Doctor ID: ";
            cin >> id;
            cin.ignore();
            cout << "Doctor Name: ";
            getline(cin, name);
            cout << "Specialty: ";
            getline(cin, specialty);
            
            Doctor d(id, name, specialty);
            hospital.addDoctor(d);
        }
        else if (choice == 3) {
            int patientId, doctorId;
            string date;
            
            cout << "Patient ID: ";
            cin >> patientId;
            cout << "Doctor ID: ";
            cin >> doctorId;
            cin.ignore();
            cout << "Appointment Date (DD/MM/YYYY): ";
            getline(cin, date);
            
            Patient* p = hospital.findPatient(patientId);
            Doctor* d = hospital.findDoctor(doctorId);
            
            if (p != NULL && d != NULL) {
                Appointment a(*p, *d, date);
                hospital.addAppointment(a);
            }
            else {
                cout << "Patient or Doctor not found!" << endl;
            }
        }
        else if (choice == 4) {
            hospital.showAllPatients();
        }
        else if (choice == 5) {
            hospital.showAllDoctors();
        }
        else if (choice == 6) {
            hospital.showAllAppointments();
        }
        else if (choice == 0) {
            cout << "Exiting program..." << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }
    
    return 0;
}
