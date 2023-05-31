#pragma once

#include <stdint.h>

#include "PrintedEdition.h"

class Book  : public PrintedEdition {
public:
    char* author;
    char* publisher;
    uint16_t genre;
    Book(const char* author, const char* publisher, uint16_t genre,
        const char* title, const char* description,
        int library_number, int release_date);
    Book(const Book& other);
    ~Book();
    const char* GetType() const override;
    PrintedEdition* clone() override;
};
