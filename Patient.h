//
// Created by Micah Olugbamila on 12/11/23.
//

#ifndef EMERGENCYROOM_PATIENT_H
#define EMERGENCYROOM_PATIENT_H

#include <iostream>
#include <string>
#include <exception>

using namespace std;

class Patient {
private:
     int pAge;
     string pName;
     string medicalCondition;

public:
    Patient();
    Patient(int pAge, string pName);
    void setAge(int newAge);
    void setName(string newName);
    void setMedicalCondition(string medicDescp);
    void displayInfo();

};


#endif //EMERGENCYROOM_PATIENT_H
