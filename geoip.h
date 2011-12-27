#ifndef CRC_H
#define CRC_H
#include <GeoIP.h>

/**
 * Calculates the CRC32 of a given data
 * @param begin The input data
 * @param count The length of the data
 * @return The calculated CRC32
 */
char *lookup_real(char *ip, const GeoIP *gi);

#endif
