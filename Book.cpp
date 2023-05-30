#include "Book.h"
#include "Utils.h"

Book::Book(const char* author, const char* publisher, uint16_t genre, 
        const char* title, const char* description, 
        int library_number, int release_date) 
            : PrintedEdition(title, description, library_number, release_date) {
    copy_string(&(this->author), author);
    copy_string(&(this->publisher), publisher);
    this->genre = genre;
}