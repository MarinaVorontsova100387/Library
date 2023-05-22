#pragma once

#include <string>

#include "Date.h"

using namespace std;

class Author {
private:
    string _first_name;
    string _last_name;
    string _patronymic;
    Date* _date_of_birth;
    Date* _date_of_dead;

public:
    Author(const string &firstName, const string &lastName, const string &patronymic, Date *dateOfBirth) : _first_name(
            firstName), _last_name(lastName), _patronymic(patronymic), _date_of_birth(dateOfBirth) {
        _date_of_dead = nullptr;
    }

    void SetDateOfDead(Date* date) {
        if (date->GetYear() > _date_of_birth->GetYear()) {
            _date_of_dead = date;
        }
    }

    const string &GetFirstName() const {
        return _first_name;
    }

    const string &GetLastName() const {
        return _last_name;
    }

    const string &GetPatronymic() const {
        return _patronymic;
    }

    const string &GetFullName() const {
        return _last_name + " " + _first_name + " " + _patronymic;
    }

    Date *GetDateOfBirth() const {
        return _date_of_birth;
    }

    Date *GetDateOfDead() const {
        return _date_of_dead;
    }
};

