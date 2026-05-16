#pragma once
#include"Person.h"
class Feedback {
public:
    void giveFeedback() {
        char feedback[500];
        cout << "Enter your feedback: ";
        cin.ignore(); 
        cin.getline(feedback, 500);
        ofstream fout("Feedback.txt", ios::app);
        fout << feedback << endl;
        fout.close();
        cout << "Feedback recorded. Thank you!\n";
    }
};