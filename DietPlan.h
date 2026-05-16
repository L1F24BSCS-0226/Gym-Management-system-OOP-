#pragma once
#pragma once
#include<iostream>
using namespace std;
class DietPlan
{
public:
    void show()
    {
        float weight, height, bmi;

        while (true) {
            cout << "Enter your weight (kg): ";
            cin >> weight;

            if (cin.fail() || weight <= 0 || weight > 200) {
                cin.clear();            
                cin.ignore(1000, '\n'); 
                cout << "Invalid weight! Enter a value between 1 and 200 kg.\n";
            }
            else {
                break; 
            }
        }

       
        while (true) {
            cout << "Enter your height (meters): ";
            cin >> height;
            if (cin.fail() || height <= 0 || height > 3) {
                cin.clear();            
                cin.ignore(1000, '\n'); 
                cout << "Invalid height! Enter a value between 1m and 3m.\n";
            }
            else {
                break; 
            }
        }

        bmi = weight / (height * height);

        cout << "\nYour BMI is: " << bmi << endl;

        if (bmi < 18.5)
        {
            cout << "Diet Plan: Weight Gain" << endl;
            cout << "High protein and high calorie meals: " << endl;
            cout << "- Chicken, Beef, Fish, Eggs" << endl;
            cout << "- Milk, Yogurt, Cheese" << endl;
            cout << "- Rice, Potatoes, Whole-wheat bread" << endl;
            cout << "- Nuts, Peanut butter, Dates" << endl;
            cout << "Snacks: " << endl;
            cout << "- Banana shake, Protein shake" << endl;
            cout << "- Boiled eggs, Dry fruits" << endl;
        }
        else if (bmi >= 18.5 && bmi < 25)
        {
            cout << "Balanced Diet: " << endl;
            cout << "- Chicken, Fish, Eggs" << endl;
            cout << "- Rice, Roti, Oats" << endl;
            cout << "- Vegetables, Fruits" << endl;
            cout << "- Milk, Yogurt" << endl;
            cout << "Healthy Snacks" << endl;
            cout << "- Fruits, Nuts" << endl;
            cout << "- Boiled eggs" << endl;
        }
        else
        {
            cout << "Diet Plan: Weight Loss" << endl;
            cout << "Low-Fat & High-Fiber Meals: " << endl;
            cout << "- Grilled Chicken, Fish" << endl;
            cout << "- Vegetables, Salad" << endl;
            cout << "- Oats, Brown rice" << endl;
            cout << "- Lentils (Daal)" << endl;
            cout << "Avoid: " << endl;
            cout << "- Fast food, Fried items" << endl;
            cout << "- Sugary drinks, Sweets" << endl;
        }
    }
};

