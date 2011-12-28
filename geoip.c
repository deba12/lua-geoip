#include <GeoIP.h>
char *lookup_real(char *ip, GeoIP *gi) {
	const char * result;
	result = GeoIP_country_code_by_name(gi, ip);
	return (char *)result;
}
