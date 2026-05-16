#pragma once


#pragma once
#include<iostream>
using namespace std;
class Payment
{
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
                file.open("payment.txt", ios::app);
                if (!file.is_open()) {
                    cout << "Error: Could not open attendance file.\n";

                }
                else {
                    file << "Id:" << id <<" | Payment recieved" << endl;
                    file.close();
                    
                    cout << "Payment recieved from Member ID: " << id << endl;
                }
            }
        }

        if (!found)
            cout << "Member Not Found!\n";

        file.close();
    }
	void record(int ID)
	{
        searchMember(ID);
	}
};

