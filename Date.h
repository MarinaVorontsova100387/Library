#pragma once

#include <string>

using namespace std;

class Date {
private:
    int _day;
    int _month;
    int _year;

    void SetDay(int day) {
        if (day <= 0) {
            _day = 1;
        } else if (day > 31) {
            _day = 31;
        } else {
            _day = day;
        }
    }

    void SetMonth(int month) {
        if (month <= 0) {
            _month = 1;
        } else if (month > 12) {
            _month = 12;
        } else {
            _month = month;
        }
    }

public:
    Date(int day, int month, int year) {
        SetDay(day);
        SetMonth(month);
        _year = year;
    }

    string ToString() {
        return to_string(_day) + "." + to_string(_month) + "." + to_string(_year);
    }

    int GetDay() const {
        return _day;
    }

    int GetMonth() const {
        return _month;
    }

    int GetYear() const {
        return _year;
    }
};
