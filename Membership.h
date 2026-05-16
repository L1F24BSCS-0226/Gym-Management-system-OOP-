#pragma once
#pragma once
#include<iostream>
using namespace std;
#include"Member.h"
class Membership :public Member
{
protected:
	
	int a;
public:
	Membership()
	{
	}
	Membership(int p, int ad)
	{
		plan = p;
		ad = a;
	}
	void searchMember(int searchID, int amount) 
	{
		ifstream file("Member.txt");
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
				file.open("MembershipPlan.txt", ios::app);
				if (!file.is_open()) {
					cout << "Error: Could not open  file.\n";

				}
				else
				{
					if (plan == 1)
					{
						cout << "Member ID " << id << " has been successfully booked for Basic Plan" << endl;
						file << id << " Plan 1" << endl;
					}
					else if (plan == 2)
					{
						cout << "Member ID " << id << " has been successfully booked for Standard Plan" << endl;
						file << id << " Plan 2" << endl;
					}
					else if (plan == 3)
					{
						cout << "Member ID " << id << " has been successfully booked for Premium Plan" << endl;
						file << id << " Plan 2" << endl;
					}
					else
					{
						cout << "Invalid Input!............." << endl;
					}
				}
			}
		}
		if (!found)
			cout << "Member Not Found!\n";

		file.close();
	}
	static void show()
	{
		cout << "Membership Plans: " << endl;
		cout << "1. Basic Plan (1 Month): pkr 2000" << endl;
		cout << "2. Standard Plan (3 Month): pkr 5500" << endl;
		cout << "3. Premium Plan (6 Month): pkr 10000" << endl;
	}
	void bookMembership(int id, int plan)
	{
		this->plan = plan;
		searchMember(id, plan);
	}
};

