BJAM = ./boost/bjam

all:
	$(BJAM) include=inc/ViennaGrid include=inc/ViennaGrid/external

clean:
	rm -rf bin
	rm -rf *.so*