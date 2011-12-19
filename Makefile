# makefile for geoiplib
# based on bitlib's makefile

CFLAGS += -lGeoIP -llua5.1 -mtune=core2 -fPIC -W -Wall -O2 -I/usr/include/lua5.1 #-I/usr/local/include

OBJS = lgeoip.o geoip.o
SRCS = lgeoip.c geoip.c
AR = ar rcu
EXT = so 

T = geoip.a

all: $T

# shared libraries (for Linux)

shared: $T
	$(CC) $(CFLAGS) -o geoip.$(EXT) -shared *.o -llua5.1
	strip geoip.$(EXT)
$T: $(OBJS)
	$(AR) $@ $(OBJS)

clean:
	rm -f $(OBJS) $T *.$(EXT)
