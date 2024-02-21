#include <iostream>
#include "/Users/pappi/Documents/UIC_DOC/fall2023/CS251/priority_queue/prqueue.h"
#include "EmergencyRoom.h"

int main() {
//
    EmergencyRoom myER;
    Patient p1 = Patient(21,"angel");
    p1.setMedicalCondition("Food poisoning");
    myER.addPatient(p1,4);


    Patient p2 = Patient(14,"anil");
    p2.setMedicalCondition("Severe fever");
    myER.addPatient(p2,1);

    Patient nextP = myER.treatPatient();
    nextP.displayInfo();
    nextP = myER.treatPatient();
    nextP.displayInfo();


    return 0;
}
