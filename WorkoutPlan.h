
#pragma once
#pragma once
#include<iostream>
#include"Membership.h"
using namespace std;
class WorkoutPlan 
{
public:
	void show(int plan)
	{
		cout << "----Workout Plan----" << endl;
		if (plan == 1)
		{
			cout << "Workout: Full Body (Machines), Chest Press, Lat Pulldown, Leg Press, Shoulder Press + Light Cardio" << endl;
		}
		else if (plan == 2)
		{
			cout << "Workout: Push, Pull, Legs Split, Bench Press, Rows, Squats, Shoulder Raises, Arm Exercises + Moderate Cardio" << endl;
		}
		else if (plan == 3)
		{
			cout << "Workout: Advanced Push, Pull, Legs Split, Bench & Incline Press, Deadlifts, Squats, Lunges, Shoulder & Arm Isolation + HIIT Cardio + Core" << endl;
		}
		else
		{
			cout << "Plan does not exist. Try Again!" << endl;
		}
	}
};

