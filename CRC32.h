#pragma once

#include <stddef.h>
#include <stdint.h>

uint32_t StunCRC32(const void* data, size_t len);
uint32_t SctpCRC32(const void* data, size_t len);
