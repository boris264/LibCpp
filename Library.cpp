#include <iostream>
#include <algorithm>

#include "Library.h"
#include "Utils.h"

#define INITIAL_ITEMS_SIZE 1
#define INITIAL_USERS_SIZE 10

Library::Library() {
    this->items = new PrintedEdition* [INITIAL_USERS_SIZE];
    this->users = new User* [INITIAL_USERS_SIZE];
    this->items_count = 0;
    this->items_size = INITIAL_ITEMS_SIZE;
    this->users_count = 0;
    this->users_size = INITIAL_USERS_SIZE;
};

Library::~Library() {
    for (uint32_t i = 0; i < this->items_count; i++) {
        delete this->items[i];
    }

    delete[] this->items;

    for (uint32_t i = 0; i < this->users_count; i++) {
        delete this->users[i];
    }

    delete[] this->users;
}

void Library::AddItem(PrintedEdition* printedEdition) {
    if (items_count >= items_size) {
        items_size *= 2;
        items = static_cast<PrintedEdition**>(realloc(items, sizeof(PrintedEdition*) * items_size));
    }

    PrintedEdition* pr = printedEdition->clone();

    items[items_count++] = pr;
}

void Library::RemoveItem(int libraryNumber) {
    PrintedEdition* itemToRemove = nullptr;
    uint32_t i;

    for (i = 0; i < items_count; i++) {
        if (items[i]->library_number == libraryNumber) {
            itemToRemove = items[i];
            break;
        }
    }

    if (itemToRemove != nullptr) {
        delete itemToRemove;
        items_count--;

        for (uint32_t k = i; k < items_count; k++) {
            items[k] = items[k + 1];
        }
    }
}

void Library::PrintItems() {
    for (uint32_t i = 0; i < items_count; i++) {
         std::cout << "Title: " << items[i]->title << std::endl;
         std::cout << "Type: " << items[i]->GetType() << std::endl;
         std::cout << "Description: " << items[i]->description << std::endl;
         std::cout << "Library number: " << items[i]->library_number << std::endl;
    }
}
