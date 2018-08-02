// Base/Parent Class

#include <iostream>
#include <string>
#include "RepeatPrescription.h"
using namespace std;

Prescription::Prescription() : medicineName(""), patientName(""), medicalAidFund(""), medicalAidNumber(""), cost(0.00)
{

}

Prescription::Prescription(string medName, string patName, string maFund, string maNumber, float costP)
{
    medicineName = medName;
    patientName = patName;
    medicalAidFund = maFund;
    medicalAidNumber = maNumber;
    cost = costP;
}

Prescription::~Prescription()
{

}


string Prescription::get_medicineName()
{
    return medicineName;
}

string Prescription::get_patientName()
{
    return patientName;
}

string Prescription::get_medicalAidFund()
{
    return medicalAidFund;
}

string Prescription::get_medicalAidNumber()
{
    return medicalAidNumber;
}

float Prescription::get_cost()
{
    return cost;
}

void Prescription::Discount(int percentage)
{
    float temp = 0;
    if (medicalAidFund == "THEAID")
    {
        cost -= static_cast<float>((percentage / 100.00) * cost);
    } else {
        cout << "No Discount." << endl;
    }
}

void Prescription::DisplayInfo(ostream& outs)
{
    outs.setf(ios::fixed);
    outs.setf(ios::showpoint);
    outs.precision(2);
    outs << "       Prescription Details: \n"
         << "===================================\n";
    outs << "Medicine Prescribed:\t" << medicineName << endl;
    outs << "Patient:\t\t\t\t" << patientName << endl;
    outs << "Medical Aid Fund:\t\t" << medicalAidFund << endl;
    outs << "Medical Aid Number:\t\t" << medicalAidNumber << endl;
    outs << "Cost:\t\t\t\t\tR" << cost << endl;
    outs << endl;
}