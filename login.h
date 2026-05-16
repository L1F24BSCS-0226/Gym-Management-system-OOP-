#pragma once
#include"Admin.h"
class Login {
public:
    bool authenticate(Admin& a) {
        char u[50], p[50];
        cout << "Username: ";
        cin >> u;
        cout << "Password: ";
        cin >> p;
        return a.login(u, p);
    }
};