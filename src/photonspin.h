#ifndef PHOTONSPIN_H
#define PHOTONSPIN_H

#include <stdint.h>

struct photonspin64_s {
  uint64_t elements[20];
  uint64_t a;
  uint64_t b;
  uint64_t c;
};

void photonspin64(struct photonspin64_s *s);

#endif
