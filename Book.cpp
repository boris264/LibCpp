#include "Book.h"
#include "Utils.h"

Book::Book(const char* author, const char* publisher, uint16_t genre,
        const char* title, const char* description,
        int library_number, int release_date)
            : PrintedEdition(title, description, library_number, release_date) {
    copy_string(&(this->author), author);
    copy_string(&(this->publisher), publisher);
    this->genre = genre;
    this->type = "Book";
}

Book::~Book() {
    delete[] this->author;
    delete[] this->publisher;
}

Book::Book(const Book& other)
    : PrintedEdition(other) {
    copy_string(&(this->author), other.author);
    copy_string(&(this->publisher), other.publisher);
    this->genre = other.genre;
}

PrintedEdition* Book::clone() {
    return new Book(*this);
}

const char* Book::GetType() const {
    return this->type;
}
