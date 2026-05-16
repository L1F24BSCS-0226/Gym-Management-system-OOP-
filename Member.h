#pragma once
#include"Person.h"
#include<fstream>
class Member :public Person
{
protected:
	int id;
	int plan;

public:
	bool isIDExists(int searchID) {
		ifstream file("Member.txt");
		if (!file) {
			return false;
		}

		char line[200];
		int id;

		while (file.getline(line, 200)) {

			if (line[0] == 'I' && line[1] == 'D') {
				id = 0;
				int i = 4;
				while (line[i] >= '0' && line[i] <= '9') 
				{
					id = id * 10 + (line[i] - '0');
					i++;
				}
				if (id == searchID) 
				{
					file.close();
					return true;
				}
			}
		}
		file.close();
		return false;
	}

	void input()
	{
		while (true) {
			cout << "Member ID: ";
			cin >> id;

			if (cin.fail()) {
				cout << "Invalid input! Enter integer.\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			else if (id < 0) {
				cout << "ID cannot be negative.\n";
			}
			else if (isIDExists(id))
			{
				cout << "ID already exists! Enter a different ID.\n";
			}
			else
			{
				cin.ignore(10000, '\n');
				break;
			}
		}

		Person::input();
		ofstream fout;
		fout.open("Member.txt", ios::app);
		fout << "ID: " << id << " | ";
		fout << "Name: " << name << " " << " | Age: " << age << endl;
		fout.close();
		cout << "Member Added Successfully!....." << endl;


	}
	int getID()
	{
		return id;
	}
	void display()
	{
		ifstream file("Member.txt");

		if (!file) 
		{
			cout << "File not found!" << endl;

		}

		char line[1000];

		cout << "Members Data\n";


		while (file.getline(line, 1000))
		{
			cout << line << endl;
		}

		file.close();


	}
};
