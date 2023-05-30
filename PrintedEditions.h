#pragma once

class PrintedEdition {
public:
    char* title;
    char* description;
    int library_number;
    int release_date;
    PrintedEdition(const char* title, const char* description, int library_number, int release_date);
    virtual ~PrintedEdition();
};