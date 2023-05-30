#include "Periodical.h"

Periodical::Periodical(Periodicallity periodicallity,
        const char* title, const char* description, 
        int library_number, int release_date) 
            : PrintedEdition(title, description, library_number, release_date) {
    this->periodicallity = periodicallity;
}