#pragma once

#include "PrintedEdition.h"
#include <stdint.h>
#include "User.h"

class Library {
public:
    PrintedEdition** items;
    uint32_t items_count;
    uint32_t items_size;
    User** users;
    uint32_t users_count;
    uint32_t users_size;
    Library();
    Library(const char* fileName);
    ~Library();

    void AddItem(PrintedEdition* printedEdition);
    void RemoveItem(int libraryNumber);
    void PrintItems();
};
