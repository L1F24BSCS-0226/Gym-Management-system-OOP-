#pragma once
#include"Person.h"
#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Report {
public:
    int countMembers() {
        ifstream file("member.txt");
        int count = 0;
        char line[200];

        while (file.getline(line, 200)) 
        {
            if (line[0] == 'I')  
                count++;
        }
        file.close();
        return count;
    }

    int countTrainers() {
        ifstream file("trainer.txt");
        int count = 0;
        char line[200];

        while (file.getline(line, 200))
        {
            if (line[0] == 'N')   
                count++;
        }
        file.close();
        return count;
    }

    void generate() {
        cout << "Total Members: " << countMembers() << endl;
        cout << "Total Trainers: " << countTrainers() << endl;
    }
};
