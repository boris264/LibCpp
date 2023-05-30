#pragma once

#include <stdint.h>

#include "PrintedEditions.h"

enum class Periodicallity {
    Weekly,
    Monthly,
    Yearly
};

class Periodical : public PrintedEdition {
public:
    Periodicallity periodicallity;
    int count;
    Periodical(Periodicallity periodicallity,
        const char* title, const char* description, 
        int library_number, int release_date);
};