#include <iostream>
#include <string.h>

#include "PrintedEdition.h"
#include "Utils.h"

PrintedEdition::PrintedEdition(const char* title, const char* description, int library_number, int release_date) {
    copy_string(&(this->title), title);
    copy_string(&(this->description), description);

    this->library_number = library_number;
    this->release_date = release_date;
}

PrintedEdition::~PrintedEdition() {
    delete[] title;
    delete[] description;
}

PrintedEdition::PrintedEdition(const PrintedEdition& other) {
    copy_string(&(this->title), other.title);
    copy_string(&(this->description), other.description);
    this->library_number = other.library_number;
    this->release_date = other.release_date;
    this->type = other.type;
}
