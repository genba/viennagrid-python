BJAM = ./boost/bjam

all:
	$(BJAM) include=ViennaGrid include=ViennaGrid/external

clean:
	rm -rf bin
	rm -rf *.so*