#pragma once
#include<iostream>
#include<fstream>
using namespace std;
int strlength(const char* str)
{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}
void strcopy(char* destination, const char* source)
{
	int l = strlength(source);
	for (int i = 0; i < l; i++)
	{
		destination[i] = source[i];
	}
	destination[l] = '\0';
}
int stringCompare(const char* a, const char* b)
{
    int i = 0;
    while (a[i] && b[i])
    {
        if (a[i] != b[i])
        {
            return a[i] - b[i];
        }
        i++;
    }
    return a[i] - b[i];
}




class Person {
protected:
    char* name;
    int age;
public:
    Person() 
    {
        name = nullptr;
        age = 0;
    }
   
    virtual ~Person() 
    {
        delete[] name;
    }

    virtual void input()
    {
       
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
            else if (age < 0||age>60) {
                cout << "Please enter a possitive number and age also less than 80 ." << endl;
            }
            else {
                cin.ignore();
                break;
            }
        }
    }
    char* getName()
    {
        return name;
}
    int getAge()
    {
        return age;
    }

    virtual void display() 
    {
        cout << "Name: " << name << " " << " | Age: " << age << endl;
    }
   
   
};


