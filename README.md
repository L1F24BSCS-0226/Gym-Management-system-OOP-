# Gym Management System – C++ OOP Project

## Introduction

The Gym Management System is a console-based application developed in C++ that helps gym administrators efficiently manage gym operations. The system supports functionalities such as member management, trainer management, attendance tracking, membership handling, payment recording, workout and diet plans, equipment listing, schedules, reports, and feedback management.

This project demonstrates important Object-Oriented Programming (OOP) concepts including inheritance, polymorphism, encapsulation, dynamic memory allocation, and file handling.

---

# Features

* Add and View Members
* Add and View Trainers
* Record Attendance
* Manage Memberships
* Record Payments
* Generate Workout Plans
* Generate Diet Plans using BMI
* Display Gym Schedule
* Display Equipment List
* Store Member Feedback
* Generate Reports

---

# OOP Concepts Used

The project demonstrates:

* Inheritance
* Polymorphism
* Encapsulation
* Dynamic Memory Allocation
* File Handling
* Modular Programming

---

# Class Hierarchy

```
             Person
            /      \
       Member      Trainer
           |
     Membership
```

Additional supporting classes:

* Admin
* Login
* Attendance
* Payment
* Schedule
* DietPlan
* Equipment
* WorkoutPlan
* Feedback
* Report
* GymSystem

---

# Project Structure

Gym-Management-System/

├── Main.cpp
├── Person.h
├── Member.h
├── Trainer.h
├── Membership.h
├── Admin.h
├── Login.h
├── Attendance.h
├── Payment.h
├── Schedule.h
├── DietPlan.h
├── Equipment.h
├── WorkoutPlan.h
├── Feedback.h
├── Report.h
├── Gym.h

Text Files:

* Member.txt
* Trainer.txt
* MembershipPlan.txt
* attendance.txt
* payment.txt
* Feedback.txt

---

# Class Descriptions

## 1. Person Class

Base class for Member and Trainer.

### Attributes

* char* name
* int age

### Functions

* input()
* display()
* getName()
* getAge()

---

## 2. Member Class

Derived from Person.

### Features

* Add member details
* Store member data in file
* Check duplicate IDs

### Functions

* input()
* display()
* isIDExists()
* getID()

---

## 3. Trainer Class

Derived from Person.

### Features

* Add trainer details
* Store trainer expertise

### Functions

* input()
* display()

---

## 4. Membership Class

Derived from Member.

### Membership Plans

* Basic Plan
* Standard Plan
* Premium Plan

### Functions

* show()
* bookMembership()

---

## 5. Admin and Login Classes

### Features

* Admin authentication
* Username and password verification

---

## 6. Attendance Class

### Features

* Record attendance
* Verify member existence

---

## 7. Payment Class

### Features

* Store payment records
* Maintain payment history

---

## 8. DietPlan Class

### Features

Calculates BMI and provides:

* Weight Gain Diet
* Balanced Diet
* Weight Loss Diet

---

## 9. WorkoutPlan Class

### Workout Plans

* Basic Plan
* Standard Plan
* Premium Plan

---

## 10. Equipment Class

### Features

Displays available gym equipment.

---

## 11. Schedule Class

### Features

Displays gym opening and closing timings along with weekly schedules.

---

## 12. Feedback Class

### Features

Stores member feedback in a file.

---

## 13. Report Class

### Features

* Count total members
* Count total trainers
* Generate reports

---

## 14. GymSystem Class

Main controller class that integrates all modules.

### Menu Options

1. View Schedule
2. Add Member
3. View Members
4. Search Member
5. Add Trainer
6. View Trainers
7. Attendance
8. Membership
9. Workout Plan
10. Diet Plan
11. Equipment
12. Payment
13. Report
14. Feedback
    E/e → Exit

---

# Program Flow

Login
↓
Main Menu
↓
Select Operation
↓
Execute Module
↓
Store Data in Files
↓
Exit

---

# File Handling

| File Name          | Purpose                   |
| ------------------ | ------------------------- |
| Member.txt         | Stores member records     |
| Trainer.txt        | Stores trainer records    |
| MembershipPlan.txt | Stores membership data    |
| attendance.txt     | Stores attendance records |
| payment.txt        | Stores payment history    |
| Feedback.txt       | Stores feedback           |

---

# How to Run

## Compile

g++ Main.cpp -o gym

## Run

./gym

---

# Learning Outcomes

Through this project, you can learn:

* Object-Oriented Programming in C++
* Inheritance and Polymorphism
* Dynamic Memory Management
* File Handling
* Console-Based Application Development
* Modular Programming

---

# Conclusion

The Gym Management System is a modular and scalable application developed using C++. It simplifies gym operations by managing members, trainers, attendance, memberships, payments, diet plans, workout plans, reports, and feedback efficiently.

This project is suitable for beginners and intermediate-level students who want practical experience with Object-Oriented Programming concepts in C++.

---

# Author

Developed as an OOP Semester Project in C++.
