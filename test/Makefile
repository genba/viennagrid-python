CC      = g++
CCFLAGS = -g -I../inc/ViennaGrid -I../inc/ViennaGrid/external -I.. -fpermissive

# CC      = clang
# CCFLAGS = -g -I../inc/ViennaGrid -I../inc/ViennaGrid/external -I..

all:
	$(CC) $(CCFLAGS) -o test         \
		test.cpp                     \
		../points/cartesian.cpp      \
		../points/cylindrical.cpp    \
		../points/polar.cpp          \
		../points/spherical.cpp      \
		../domains/triangular.cpp    \
		../segments/triangular.cpp

clean:
	rm test