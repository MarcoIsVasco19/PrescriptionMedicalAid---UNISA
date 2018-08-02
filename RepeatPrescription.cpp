// Derived/Child Class

#include <iostream>
#include <string>
#include "RepeatPrescription.h"
using namespace std;

RepeatPrescription::RepeatPrescription() : numberOfRepeats(0), lastDateIssued("")
{
    // Left Blank
}

RepeatPrescription::RepeatPrescription(string medName, string patName, string maFund, string maNumber,
                                       float costP, int the_repeats, string the_lastDateIssued)
: Prescription(medName, patName, maFund, maNumber, costP)
{
    numberOfRepeats = the_repeats;
    lastDateIssued = the_lastDateIssued;
}

int RepeatPrescription::get_numberOfRepeats()
{
    return numberOfRepeats;
}

string RepeatPrescription::get_lastDateIssued()
{
    return lastDateIssued;
}

void RepeatPrescription::issuePrescription()
{
    string newDate;

    cout << "What is the date of this prescription?(yyyymmdd)\n";
    cin >> newDate;
    lastDateIssued = newDate;

    if (numberOfRepeats > 0)
    {
        --numberOfRepeats;
        if (numberOfRepeats == 0)
            cout << "WARNING: This is the last issue of the current prescription.\n";
    } else {
        cout << "ERROR: No more meds allowed to be issued to patient.\n";
    }
}

void RepeatPrescription::DisplayInfo(ostream& outs)
{
    Prescription::DisplayInfo(outs);
    outs << "----------------------------\n";
    outs << "Number of repeats:\t" << numberOfRepeats << endl;
    outs << "Last date issued:\t" << lastDateIssued << endl;
    outs << endl;
}