#include <GeoIP.h>
char *lookup_real(char *ip, const GeoIP *gi) {
	const char * result;
	result = GeoIP_country_code_by_name((GeoIP *)gi, ip);
	return (char *)result;
}
