#pragma once
#include <iostream>
using namespace std;

#include "login.h"
#include "Member.h"
#include "Membership.h"
#include "Report.h"
#include"Payment.h"
#include"Attendance.h"
#include"Schedule.h"
#include"DietPlan.h"
#include"Equipment.h"
#include "WorkoutPlan.h"
#include "Trainer.h"
#include "Feedback.h"

class GymSystem {
    Member members[1000];
    Trainer trainers[1000];
    int memberCount, trainerCount;
    Membership M1;
    Attendance A1;
    Payment P1;
    Report R1;
    Schedule S1;
    DietPlan D1;
    Equipment E1;
    WorkoutPlan W1;
    Feedback F1;
    char ch[3];
public:
    GymSystem() {
        memberCount = 0;
        trainerCount = 0;
    }

    void menu() {
        cout << "\n--- Gym Management System ---\n";
        cout << "1.View Schedule \n2.Add Member\n3.View Members\n4.Search Member\n";
        cout << "5.Add Trainer\n6.View Trainers\n7.Attendance\n";
        cout << "8.Membership\n9.Workout Plan\n10.Diet Plan\n";
        cout << "11.Equipment\n12.Payment\n13.Report\n14.Feedback\nE or e:Exit\n";
    }


    void searchMember(int searchID) {
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
                cout << "Member Found:\n";
                cout << line << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "Member Not Found!\n";

        file.close();
    }

    void run() {
        Admin admin;
        Login login;

        if (!login.authenticate(admin)) {
            cout << "Login Failed!\n";
            return;
        }

        
        do {
            menu();
            cout << "Choice: ";
            cin >> ch;

            if (ch[0] == '1' && ch[1] == '\0')
            {
                S1.displaySchedule();
            }
            else  if (ch[0] == '2' && ch[1] == '\0')
            {
                members[memberCount++].input();
            }
               

            else  if (ch[0] == '3' && ch[1] == '\0')
            {
                for (int i = 0; i < 1; i++)
                {
                    members[i].display();

                }
            }
                    
                
               

            else if (ch[0] == '4' && ch[1] == '\0')
            {
                int id;
                while (true) {
                    cout << "Enter Id:";
                    cin >> id;

                    if (cin.fail()) {
                        cout << "Invalid input! Please enter a valid integer." << endl;
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }
                    else if (id < 0) {
                        cout << "Please enter a possitive number ." << endl;
                    }
                    else {
                        cin.ignore();
                        break;
                    }
                }
                searchMember(id);
               
            }

            else if (ch[0] == '5' && ch[1] == '\0')
            {
                trainers[trainerCount++].input();
            }
               

            else if (ch[0] == '6' && ch[1] == '\0')
            {
                for (int i = 0; i < 1; i++)
                    trainers[i].display();
            }

            else if (ch[0] == '7' && ch[1] == '\0')
            {
                int id;
                while (true) {
                    cout << "Enter Id:";
                    cin >> id;

                    if (cin.fail()) {
                        cout << "Invalid input! Please enter a valid integer." << endl;
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }
                    else if (id < 0) {
                        cout << "Please enter a possitive number ." << endl;
                    }
                    else {
                        cin.ignore();
                        break;
                    }
                }
                A1.mark_Attendance(id);
            }
               

            else if (ch[0] == '8' && ch[1] == '\0')
            {
               
               int plan;
               int id;
               M1.show();

               while (true) {
                   cout << "Enter Id:";
                   cin >> id;

                   if (cin.fail()) {
                       cout << "Invalid input! Please enter a valid integer." << endl;
                       cin.clear();
                       cin.ignore(10000, '\n');
                   }
                   else if (id < 0) {
                       cout << "Please enter a possitive number ." << endl;
                   }
                   else {
                       cin.ignore();
                       break;
                   }
               }
               while (true) {

                   cout << "Enter Plan:";
                   cin >> plan;

                   if (cin.fail()) {
                       cout << "Invalid input! Please enter a valid integer." << endl;
                       cin.clear();
                       cin.ignore(10000, '\n');
                   }
                   else if (plan < 0 || plan>3) {
                       cout << "Please enter a  number from 1-3 ." << endl;
                   }
                   else {
                       cin.ignore();
                       break;
                   }
               }

               M1.bookMembership(id, plan);
            }

            else  if (ch[0] == '9' && ch[1] == '\0')
            {
                int plan;
                while (true) {

                    cout << "Enter Plan(1-3):";
                    cin >> plan;

                    if (cin.fail()) {
                        cout << "Invalid input! Please enter a valid integer." << endl;
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }
                    else if (plan < 1 || plan > 3) {
                        cout << "Please enter a  number from 1-3 ." << endl;
                    }
                    else {
                        cin.ignore();
                        break;
                    }
                }
                if (plan==1)
                {
                    W1.show(plan);
                }
                else if (plan==2)
                {
                    W1.show(plan);
                }
                else if (plan == 3)
                {
                    W1.show(plan);
                }
                else
                {
                    cout << "Invalid Input!...";
                }

            }
              
               

            else if (ch[0] == '1' && ch[1] == '0'&&ch[2]=='\0')
            {
                D1.show();
            }

            else if (ch[0] == '1' && ch[1] == '1' && ch[2] == '\0')
            {
                E1.list();
            }
            else  if (ch[0] == '1' && ch[1] == '2' && ch[2] == '\0')
            {
                int id;

                while (true) {
                    cout << "Enter Id:";
                    cin >> id;

                    if (cin.fail()) {
                        cout << "Invalid input! Please enter a valid integer." << endl;
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }
                    else if (id < 0) {
                        cout << "Please enter a possitive number ." << endl;
                    }
                    else {
                        cin.ignore();
                        break;
                    }
                }

                P1.record(id);
            }
               
            else if (ch[0] == '1' && ch[1] == '3' && ch[2] == '\0')
            {
                R1.generate();
                
            }

            else if (ch[0] == '1' && ch[1] == '4' && ch[2] == '\0')
            {
               
                F1.giveFeedback();
            }

            else if (ch[0] == 'e' && ch[1] == '\0' )
            {
                cout << "BY BY!......" << endl;
            }
            else if (ch[0] == 'E' && ch[1] == '\0')
            {
                cout << "BY BY!......" << endl;
            }
            else
            {
                cout << "Invalid Input!.......";
            }
        } while (ch[0] != 'e' && ch[0] != 'E');
    }
};

