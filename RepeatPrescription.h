// Header --> Derived/Child Class

#ifndef REPEATPRESCRIPTION_H
#define REPEATPRESCRIPTION_H

#include "Prescription.h"
#include <string>
using namespace std;

class RepeatPrescription : public Prescription
{
public:
    RepeatPrescription();

    RepeatPrescription(string medName, string patName, string maFund, string maNumber,
                       float costP, int the_repeats, string the_lastDateIssued);

    int get_numberOfRepeats();

    string get_lastDateIssued();

    void issuePrescription();

    void DisplayInfo(ostream& outs);

private:
    int numberOfRepeats;
    string lastDateIssued;
};


#endif //REPEATPRESCRIPTION_H
