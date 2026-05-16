#pragma once
#include"Person.h"

class Trainer :public Person
{
public:
	char* expertise;
	

	Trainer()
	{
		expertise = nullptr;
	}
	Trainer(char* e)
	{
		expertise = new char[strlength(e) + 1];
		strcopy(expertise, e);
	}
	void input1()
	{
		cin.ignore(10000, '\n');
		char temp[100];
		cout << "Name: ";
		cin.getline(temp, 100);
		delete[] name;
		name = new char[strlength(temp) + 1];
		strcopy(name, temp);

		while (true) {
			cout << "Age: ";
			cin >> age;

			if (cin.fail()) {
				cout << "Invalid input! Please enter a valid integer." << endl;
				cin.clear();
				cin.ignore(10000, '\n');
			}
			else if (age < 0||age>40) {
				cout << "Please enter a possitive number and age must be less than 40 ." << endl;
			}
			else {
				cin.ignore();
				break;
			}
		}
	}
    void input() {
        input1();
        char temp[100];
        cout << "Expertise: ";
		cin.getline(temp, 100);
       
        expertise = new char[strlength(temp) + 1];
        strcopy(expertise, temp);
		ofstream fout;
		fout.open("Trainer.txt", ios::app);
		
		fout << "Name: " << name << " " << " | Age: " << age <<" ";
		fout << " | Expertise:" << expertise << " "<<endl;
		
		fout.close();
		cout << "Trainer Added Succesfully!...";

    }

    void display() {
		ifstream file("Trainer.txt");

		if (!file) {
			cout << "File not found!" << endl;

		}

		char line[1000];

		cout << "Trainers Data\n";


		while (file.getline(line, 1000))
		{
			cout << line << endl;
		}

		file.close();
		
		
    }
	~Trainer()
	{
		delete[] expertise;
	}

};