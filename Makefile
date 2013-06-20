BJAM = ./inc/boost/bjam

all:
	$(BJAM) include=inc/ViennaGrid include=inc/ViennaGrid/external c++-template-depth=512 toolset=clang

clean:
	rm -rf bin
	rm -rf *.so*
