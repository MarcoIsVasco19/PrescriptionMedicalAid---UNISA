#include <iostream>
#include <string>
#include "RepeatPrescription.h"
using namespace std;

int main()
{
    // 7b
    Prescription po1("Panado", "John Apfelbaum", "THEAID", "12345", 39.59);
    int discount;

    cout << "Question 7b instantiated info below:\n";
    cout << "Medicine:\t" << po1.get_medicineName() << endl;
    cout << "Patient:\t" << po1.get_patientName() << endl;
    cout << "MA Fund:\t" << po1.get_medicalAidFund() << endl;
    cout << "MA Number:\t" << po1.get_medicalAidNumber() << endl;
    cout << "Cost:\t\tR" << po1.get_cost() << endl << endl;

    cout << "what is the discount(percentage amount)? ";
    cin >> discount;
    po1.Discount(discount);

    cout << endl << "Updated information for Patient: John Apfelbaum\n";
    po1.DisplayInfo(cout);

    // 7d
    RepeatPrescription rpo1("Myprodol", "Annie Apfelbaum", "MYAID", "43215", 89.59, 1, "20170620");

    cout << "Question 7d instantiated info below:\n";
    cout << "Medicine:\t\t\t" << rpo1.get_medicineName() << endl;
    cout << "Patient:\t\t\t" << rpo1.get_patientName() << endl;
    cout << "MA Fund:\t\t\t" << rpo1.get_medicalAidFund() << endl;
    cout << "MA Number:\t\t\t" << rpo1.get_medicalAidNumber() << endl;
    cout << "Cost:\t\t\t\tR" << rpo1.get_cost() << endl;
    cout << "Number of repeats:\t" << rpo1.get_numberOfRepeats() << endl;
    cout << "Last date issued:\t" << rpo1.get_lastDateIssued() << endl;

    rpo1.issuePrescription();

    cout << endl << "Updated information for Patient: Annie Apfelbaum\n";
    rpo1.DisplayInfo(cout);

    return 0;
}