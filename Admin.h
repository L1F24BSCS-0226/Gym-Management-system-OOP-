#pragma once
#include"Person.h"
class Admin  {
    char* user;
    char* pass;

public:
    Admin() {
        user = new char[strlength("user") + 1];
        strcopy(user, "user");

        pass = new char[strlength("123") + 1];
        strcopy(pass, "123");
    }

    ~Admin() {
        delete[] user;
        delete[] pass;
    }

    bool login(const char* u, const char* p) const {
        return stringCompare(u, user) == 0 &&
            stringCompare(p, pass) == 0;
    }
};