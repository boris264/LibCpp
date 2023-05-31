#include "Periodical.h"

Periodical::Periodical(Periodicallity periodicallity,
        const char* title, const char* description,
        int library_number, int release_date)
            : PrintedEdition(title, description, library_number, release_date) {
    this->periodicallity = periodicallity;
    this->type = "Periodical";
}

Periodical::Periodical(const Periodical& other)
    : PrintedEdition(other) {
    this->periodicallity = other.periodicallity;
}

PrintedEdition* Periodical::clone() {
    return new Periodical(*this);
}

Periodical::~Periodical() {

}

const char* Periodical::GetType() const {
    return this->type;
}
