#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_FAST_COMPILE
#include <catch2/catch.hpp>

#include "endian.hpp"

TEST_CASE("host_to_big_endian", "[endian_suite]")
{
    SECTION("uint16_t") {
        uint16_t value = 0xFF00;
        CHECK(typeid(htobe(value)) == typeid(htobe<uint16_t>(value)));
    }

    SECTION("uint32_t") {
        uint32_t value = 0xFF00FF00;
        CHECK(typeid(htobe(value)) == typeid(htobe<uint32_t>(value)));
    }

    SECTION("uint64_t") {
        uint64_t value = 0xFF00FF00FF00FF;
        CHECK(typeid(htobe(value)) == typeid(htobe<uint64_t>(value)));
    }
}

TEST_CASE("host_to_little_endian", "[endian_suite]")
{
    SECTION("uint16_t") {
        uint16_t value = 0xFF00;
        CHECK(typeid(htole(value)) == typeid(htole<uint16_t>(value)));
    }

    SECTION("uint32_t") {
        uint32_t value = 0xFF00FF00;
        CHECK(typeid(htole(value)) == typeid(htole<uint32_t>(value)));
    }

    SECTION("uint64_t") {
        uint64_t value = 0xFF00FF00FF00FF;
        CHECK(typeid(htole(value)) == typeid(htole<uint64_t>(value)));
    }
}

TEST_CASE("big_endian_to_host", "[endian_suite]")
{
    SECTION("uint16_t") {
        uint16_t value = 0xFF00;
        CHECK(typeid(betoh(value)) == typeid(betoh<uint16_t>(value)));
    }

    SECTION("uint32_t") {
        uint32_t value = 0xFF00FF00;
        CHECK(typeid(betoh(value)) == typeid(betoh<uint32_t>(value)));
    }

    SECTION("uint64_t") {
        uint64_t value = 0xFF00FF00FF00FF;
        CHECK(typeid(betoh(value)) == typeid(betoh<uint64_t>(value)));
    }
}

TEST_CASE("little_endian_to_host", "[endian_suite]")
{
    SECTION("uint16_t") {
        uint16_t value = 0xFF00;
        CHECK(typeid(letoh(value)) == typeid(letoh<uint16_t>(value)));
    }

    SECTION("uint32_t") {
        uint32_t value = 0xFF00FF00;
        CHECK(typeid(letoh(value)) == typeid(letoh<uint32_t>(value)));
    }

    SECTION("uint64_t") {
        uint64_t value = 0xFF00FF00FF00FF;
        CHECK(typeid(letoh(value)) == typeid(letoh<uint64_t>(value)));
    }
}
