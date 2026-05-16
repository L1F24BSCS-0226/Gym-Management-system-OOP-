#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Attendance {

public:
    void searchMember(int searchID) {
        ifstream file("member.txt");
        if (!file) {
            cout << "File not found!\n";
            return;
        }

        char line[10000];
        bool found = false;

        while (file.getline(line, 10000)) {
            int id = 0;
            int i = 4;

            while (line[i] >= '0' && line[i] <= '9') {
                id = id * 10 + (line[i] - '0');
                i++;
            }

            if (id == searchID) {
                found = true;
                ofstream file;
                file.open("attendance.txt", ios::app);
                if (!file.is_open()) {
                    cout << "Error: Could not open attendance file.\n";

                }
                else {
                    file << "Member ID: " << id << " - Attendance marked\n";
                    file.close();
                    cout << "Member ID: " << id << " - Attendance marked\n";
                   
                }
            }
        }

        if (!found)
            cout << "Member Not Found!\n";

        file.close();
    }

    void mark_Attendance(int id)
    {
        searchMember(id);
       
    }


};