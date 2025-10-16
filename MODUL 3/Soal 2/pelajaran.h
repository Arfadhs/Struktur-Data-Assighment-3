#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>

struct Pelajaran {
    std::string namaMapel;
    std::string kodeMapel;
};

Pelajaran create_pelajaran(const std::string &namapel, const std::string &kodepel);
void tampil_pelajaran(const Pelajaran &pel);

#endif
