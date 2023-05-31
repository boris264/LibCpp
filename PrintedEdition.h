#pragma once

class PrintedEdition {
protected:
    const char* type;
public:
    char* title;
    char* description;
    int library_number;
    int release_date;
    PrintedEdition(const char* title, const char* description, int library_number, int release_date);
    PrintedEdition(const PrintedEdition& other);
    virtual ~PrintedEdition();

    virtual const char* GetType() const = 0;
    virtual PrintedEdition* clone() = 0;
};
