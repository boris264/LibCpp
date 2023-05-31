#include "Comic.h"
#include "Utils.h"

Comic::Comic(const char* author, const char* publisher, uint16_t genre, int count,
    const char* title, const char* description, int library_number, int release_date)
        : PrintedEdition(title, description, library_number, release_date) {
    copy_string(&(this->author), author);
    copy_string(&(this->publisher), publisher);
    this->genre = genre;
    this->count = count;
    this->type = "Comic";
}

Comic::Comic(const Comic& other)
    : PrintedEdition(other) {
    copy_string(&(this->author), other.author);
    copy_string(&(this->publisher), other.publisher);
    this->genre = other.genre;
    this->count = other.count;
}

PrintedEdition* Comic::clone() {
    return new Comic(*this);
}

Comic::~Comic() {
    delete[] author;
    delete[] publisher;
}

const char* Comic::GetType() const {
    return this->type;
}
