#include "geoip.h"
#include "lua.h"
#include <GeoIP.h>
#include "lauxlib.h"

const GeoIP * gi;

static int lookup(lua_State *L) {
	size_t l;
	const char *s = luaL_checklstring(L, 1, &l);
	lua_pushstring(L, lookup_real((char *)s, gi));
	return 1;
}

static const struct luaL_reg lib[] = {
	{"lookup", lookup},
	{NULL, NULL}
};

LUALIB_API int luaopen_geoip(lua_State *L) {
	gi = GeoIP_new(GEOIP_STANDARD);
	luaL_openlib(L, "geoip", lib, 0);
	return 1;
}
