//
// Created by Micah Olugbamila on 12/11/23.
//
#include "Patient.h"
Patient::Patient() {
    this->pName = "No Name";
    this->pAge = -1;
    this->medicalCondition = "unregistered";
}
Patient ::Patient(int pAge, string pName) {
    this->pAge = pAge;
    this->pName = pName;
}
void Patient :: setAge(int newAge){
    if(newAge < 0 || newAge > 200){
        throw runtime_error("Unable to change age\n"
                            "Please input a valid age between 0-200\n");
    }
    pAge = newAge;
    cout <<"New update: patient's age was changed to " << pAge << endl;

}
void Patient :: setName(string newName){
    pName = newName;
    cout <<"New update: patient's name was changed to " << pName << endl;
}
void Patient :: setMedicalCondition(string medicDescp){
    medicalCondition = medicDescp;
}
void Patient :: displayInfo(){
    cout << "Patient Name: " << pName << "\t\t\tAge: " << pAge << "\t\t\tCondition: " << medicalCondition <<endl;
}

