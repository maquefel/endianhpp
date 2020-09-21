#ifndef __ENDIAN_HPP__
#define __ENDIAN_HPP__

#include <endian.h>
#include <stdint.h>

template<class T> auto htobe(T val);

template<>
auto htobe<uint16_t>(uint16_t val) { return htobe16(val); }

template<>
auto htobe<uint32_t>(uint32_t val) { return htobe32(val); }

template<>
auto htobe<uint64_t>(uint64_t val) { return htobe64(val); }

template<class T> auto htole(T val);

template<>
auto htole<uint16_t>(uint16_t val) { return htole16(val); }

template<>
auto htole<uint32_t>(uint32_t val) { return htole32(val); }

template<>
auto htole<uint64_t>(uint64_t val) { return htole64(val); }

template<class T> auto betoh(T val);

template<>
auto betoh<uint16_t>(uint16_t val) { return be16toh(val); }

template<>
auto betoh<uint32_t>(uint32_t val) { return be32toh(val); }

template<>
auto betoh<uint64_t>(uint64_t val) { return be64toh(val); }

template<class T> auto letoh(T val);

template<>
auto letoh<uint16_t>(uint16_t val) { return le16toh(val); }

template<>
auto letoh<uint32_t>(uint32_t val) { return le32toh(val); }

template<>
auto letoh<uint64_t>(uint64_t val) { return le64toh(val); }

#endif
