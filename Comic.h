#pragma once

#include <stdint.h>

#include "PrintedEdition.h"
#include "Utils.h"

class Comic : public PrintedEdition {
public:
  char* author;
  char* publisher;
  uint16_t genre;
  Periodicallity eriodicallity;
  int count;
  Comic(const char* author, const char* publisher, uint16_t genre, int count,
    const char* title, const char* description, int library_number, int release_date);
  Comic(const Comic& other);
  ~Comic();
  const char* GetType() const override;
  PrintedEdition* clone() override;
};
