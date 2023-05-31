#pragma once

#include <stdint.h>

#include "PrintedEdition.h"
#include "Utils.h"

class Periodical : public PrintedEdition {
public:
    Periodicallity periodicallity;
    int count;
    Periodical(Periodicallity periodicallity,
        const char* title, const char* description,
        int library_number, int release_date);
    Periodical(const Periodical& other);
    ~Periodical();

    const char* GetType() const override;
    PrintedEdition* clone() override;
};
