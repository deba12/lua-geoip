#include <GeoIP.h>

char *lookup_real(char *ip) {
	GeoIP * gi;
	gi = GeoIP_new(GEOIP_STANDARD);
	const char * result;
	result = GeoIP_country_code_by_name(gi, ip);
	GeoIP_delete(gi);
	return (char *)result;
}
