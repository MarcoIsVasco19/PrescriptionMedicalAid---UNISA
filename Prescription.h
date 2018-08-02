// Header --> Base/Parent Class

#ifndef PRESCRIPTION_H
#define PRESCRIPTION_H

#include <string>
using namespace std;

class Prescription
{
public:
    Prescription();

    Prescription(string medName, string patName, string maFund, string maNumber, float costP);

    ~Prescription();

    string get_medicineName();

    string get_patientName();

    string get_medicalAidFund();

    string get_medicalAidNumber();

    float get_cost();

    void Discount(int percentage);

    void DisplayInfo(ostream& outs);


private:
    string medicineName;
    string patientName;
    string medicalAidFund;
    string medicalAidNumber;
    float cost;
};


#endif // PRESCRIPTION_H
