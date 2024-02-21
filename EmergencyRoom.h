//
// Created by Micah Olugbamila on 12/11/23.
//

#ifndef EMERGENCYROOM_EMERGENCYROOM_H
#define EMERGENCYROOM_EMERGENCYROOM_H
#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include "/Users/pappi/Documents/UIC_DOC/fall2023/CS251/priority_queue/prqueue.h"
#include "Patient.h"

using namespace std;

class EmergencyRoom{
private:
    prqueue<Patient> ERoom;

public:
    void addPatient(const Patient& patient, int priority){
        ERoom.enqueue(patient, priority);
    }
    Patient treatPatient(){
        return ERoom.dequeue();
    }

};
#endif //EMERGENCYROOM_EMERGENCYROOM_H
