#include <iostream>
#include <string.h>

#include "PrintedEditions.h"
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