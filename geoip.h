#ifndef LGEOIP_H
#define LGEOIP_H
#include <GeoIP.h>

char *lookup_real(char *ip, const GeoIP *gi);

#endif
