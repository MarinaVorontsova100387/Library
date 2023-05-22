#pragma once

#include <string>
#include <vector>

#include "Date.h"
#include "Author.h"

using namespace std;

class Book {
private:
    string _title;
    vector<Author*>* _authors;
    string _publisher;
    Date* _year_of_publishing;

public:
    Book(const string &title, vector<Author *> *authors, const string &publisher, Date *yearOfPublishing) : _title(
            title), _authors(authors), _publisher(publisher), _year_of_publishing(yearOfPublishing) {}

    Book(const string &title, Author *author, const string &publisher, Date *yearOfPublishing) : _title(
            title), _publisher(publisher), _year_of_publishing(yearOfPublishing) {
        _authors = new vector<Author*>();
        _authors->push_back(author);
    }

    const string &GetTitle() const {
        return _title;
    }

    vector<Author *> *GetAuthors() const {
        return _authors;
    }

    const string &GetPublisher() const {
        return _publisher;
    }

    Date *GetYearOfPublishing() const {
        return _year_of_publishing;
    }
};
